const fs = require("fs");
const path = require("path");
const vm = require("vm");

const bundledNodeModules = "C:\\Users\\笑春风\\.cache\\codex-runtimes\\codex-primary-runtime\\dependencies\\node\\node_modules";
process.env.NODE_PATH = [process.env.NODE_PATH, bundledNodeModules].filter(Boolean).join(path.delimiter);
require("module").Module._initPaths();

const {
  AlignmentType,
  BorderStyle,
  Document,
  HeadingLevel,
  Packer,
  Paragraph,
  TextRun
} = require("docx");

const siteRoot = path.resolve(__dirname, "..");
const dataPath = path.join(siteRoot, "data.js");
const exportDir = path.join(siteRoot, "exports");

function loadData() {
  const code = fs.readFileSync(dataPath, "utf8");
  const context = { window: {} };
  vm.createContext(context);
  vm.runInContext(code, context);
  return context.window.XMUOJ_SOLUTIONS_DATA || { contests: [] };
}

function normalizeSolutionPath(value) {
  return String(value || "").replace(/\\/g, "/").replace(/^\.\//, "");
}

function languageFromPath(value) {
  const ext = (String(value || "").match(/\.([a-z0-9]+)$/i) || [])[1] || "";
  const map = { cc: "cpp", cxx: "cpp", hpp: "cpp" };
  return map[ext.toLowerCase()] || ext.toLowerCase();
}

function solutionCandidates(contest, problem) {
  const solution = problem.solution || {};
  const seen = new Set();
  const candidates = [];
  const add = (value) => {
    const normalized = normalizeSolutionPath(value);
    if (!normalized || seen.has(normalized)) return;
    seen.add(normalized);
    candidates.push(normalized);
  };
  add(solution.path);
  const contestId = String(contest && contest.id || "");
  const problemId = String(problem && problem.id || "");
  const displayId = displayProblemId(problemId);
  const bases = [problemId, displayId].filter(Boolean);
  const exts = ["cpp", "cc", "cxx", "c", "py", "java", "js", "ts", "go", "rs", "kt"];
  bases.forEach((base) => exts.forEach((ext) => add(`solutions/${contestId}/${base}.${ext}`)));
  return candidates;
}

function hydrateSolutions(data) {
  for (const contest of data.contests || []) {
    for (const problem of contest.problems || []) {
      const current = problem.solution || {};
      for (const candidate of solutionCandidates(contest, problem)) {
        const filePath = path.join(siteRoot, candidate);
        if (!fs.existsSync(filePath)) continue;
        const code = fs.readFileSync(filePath, "utf8");
        if (!code.trim()) continue;
        problem.solution = {
          path: candidate,
          language: current.language || languageFromPath(candidate),
          code
        };
        break;
      }
      if (!problem.solution || !problem.solution.code) {
        problem.solution = {
          path: normalizeSolutionPath(current.path || solutionCandidates(contest, problem)[0]),
          language: current.language || languageFromPath(current.path || solutionCandidates(contest, problem)[0]),
          code: ""
        };
      }
    }
  }
  return data;
}
function stripHtml(html) {
  return String(html || "")
    .replace(/<br\s*\/?>/gi, "\n")
    .replace(/<\/p>/gi, "\n")
    .replace(/<[^>]*>/g, "")
    .replace(/&nbsp;/g, " ")
    .replace(/&quot;/g, '"')
    .replace(/&#039;/g, "'")
    .replace(/&lt;/g, "<")
    .replace(/&gt;/g, ">")
    .replace(/&amp;/g, "&")
    .replace(/\n{3,}/g, "\n\n")
    .trim();
}

function displayProblemId(id) {
  return String(id || "")
    .replace(/^JD(\d+)$/i, "$1")
    .replace(/^LinK/i, "LinK");
}

function displayProblemLabel(problem) {
  return [displayProblemId(problem.id), problem.title || ""].filter(Boolean).join(" ");
}

function fenced(code, language) {
  if (!code) return "_还没有参考代码,欢迎投稿!_";
  return `\`\`\`${language || ""}\n${code.trimEnd()}\n\`\`\``;
}

function appendTextSection(lines, title, body) {
  if (!body) return;
  lines.push(`#### ${title}`);
  lines.push("");
  lines.push(body);
  lines.push("");
}

function buildMarkdown(data) {
  const lines = [];
  lines.push("# 西坡的题集");
  lines.push("");
  lines.push(`导出时间：${new Date().toLocaleString("zh-CN")}`);
  lines.push(`数据更新时间：${data.generatedAt || "-"}`);
  lines.push("");

  for (const contest of data.contests || []) {
    lines.push(`## ${contest.title || `Contest ${contest.id}`}`);
    lines.push("");
    const desc = stripHtml(contest.description);
    if (desc) {
      lines.push(desc);
      lines.push("");
    }

    for (const problem of contest.problems || []) {
      lines.push(`### ${displayProblemLabel(problem)}`.trim());
      lines.push("");
      lines.push(`- 题目来源：${problem.url || ""}`);
      lines.push(`- 时间限制：${problem.timeLimit || "-"} ms`);
      lines.push(`- 内存限制：${problem.memoryLimit || "-"} MB`);
      if (problem.source) lines.push(`- 来源：${problem.source}`);
      lines.push("");
      appendTextSection(lines, "题面", stripHtml(problem.description));
      appendTextSection(lines, "输入", stripHtml(problem.inputDescription));
      appendTextSection(lines, "输出", stripHtml(problem.outputDescription));
      appendTextSection(lines, "提示", stripHtml(problem.hint));
      lines.push("#### 参考代码");
      lines.push("");
      lines.push(fenced(problem.solution && problem.solution.code, problem.solution && problem.solution.language));
      lines.push("");
    }
  }

  return lines.join("\n");
}

function textParagraph(text, options = {}) {
  return new Paragraph({
    ...options,
    children: [new TextRun({ text: text || "-", font: "Microsoft YaHei" })]
  });
}

function codeParagraph(text) {
  return new Paragraph({
    border: {
      top: { style: BorderStyle.SINGLE, size: 1, color: "DDDDDD" },
      bottom: { style: BorderStyle.SINGLE, size: 1, color: "DDDDDD" },
      left: { style: BorderStyle.SINGLE, size: 1, color: "DDDDDD" },
      right: { style: BorderStyle.SINGLE, size: 1, color: "DDDDDD" }
    },
    spacing: { before: 80, after: 80 },
    children: [new TextRun({ text: text || "", font: "Consolas", size: 18 })]
  });
}

function addSection(children, title, body) {
  if (!body) return;
  children.push(textParagraph(title, { heading: HeadingLevel.HEADING_4 }));
  for (const line of body.split(/\r?\n/)) {
    children.push(textParagraph(line));
  }
}

function buildDocx(data) {
  const children = [];
  children.push(textParagraph("西坡的题集", { heading: HeadingLevel.TITLE, alignment: AlignmentType.CENTER }));
  children.push(textParagraph(`导出时间：${new Date().toLocaleString("zh-CN")}`));
  children.push(textParagraph(`数据更新时间：${data.generatedAt || "-"}`));

  for (const contest of data.contests || []) {
    children.push(textParagraph(contest.title || `Contest ${contest.id}`, { heading: HeadingLevel.HEADING_1 }));
    addSection(children, "比赛说明", stripHtml(contest.description));

    for (const problem of contest.problems || []) {
      children.push(textParagraph(displayProblemLabel(problem), { heading: HeadingLevel.HEADING_2 }));
      children.push(textParagraph(`题目来源：${problem.url || ""}`));
      children.push(textParagraph(`时间限制：${problem.timeLimit || "-"} ms    内存限制：${problem.memoryLimit || "-"} MB`));
      if (problem.source) children.push(textParagraph(`来源：${problem.source}`));

      addSection(children, "题面", stripHtml(problem.description));
      addSection(children, "输入", stripHtml(problem.inputDescription));
      addSection(children, "输出", stripHtml(problem.outputDescription));
      addSection(children, "提示", stripHtml(problem.hint));
      children.push(textParagraph("参考代码", { heading: HeadingLevel.HEADING_4 }));
      const solution = problem.solution || {};
      children.push(codeParagraph(solution.code || "还没有参考代码,欢迎投稿!"));
    }
  }

  return new Document({ sections: [{ properties: {}, children }] });
}

async function main() {
  if (!fs.existsSync(dataPath)) throw new Error(`Missing data file: ${dataPath}`);
  fs.mkdirSync(exportDir, { recursive: true });
  const data = hydrateSolutions(loadData());
  const stamp = new Date().toISOString().replace(/[-:T]/g, "").slice(0, 12);
  const mdPath = path.join(exportDir, `xmuoj-solutions-${stamp}.md`);
  const docxPath = path.join(exportDir, `xmuoj-solutions-${stamp}.docx`);

  fs.writeFileSync(mdPath, buildMarkdown(data), "utf8");
  const buffer = await Packer.toBuffer(buildDocx(data));
  fs.writeFileSync(docxPath, buffer);

  console.log(`Markdown: ${mdPath}`);
  console.log(`Word:     ${docxPath}`);
}

main().catch((error) => {
  console.error(error);
  process.exit(1);
});

