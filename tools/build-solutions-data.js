const fs = require("fs");
const path = require("path");
const siteRoot = path.resolve(__dirname, "..");
const solutionsRoot = path.join(siteRoot, "solutions");
const exts = [".cpp", ".cc", ".cxx", ".c", ".py", ".java", ".js", ".ts", ".go", ".rs", ".kt"];
const payload = { generatedAt: new Date().toLocaleString("zh-CN", { hour12: false }), solutions: {} };

function languageFromExt(ext) {
  const lang = ext.slice(1).toLowerCase();
  return lang === "cc" || lang === "cxx" ? "cpp" : lang;
}

if (fs.existsSync(solutionsRoot)) {
  for (const contest of fs.readdirSync(solutionsRoot)) {
    const contestDir = path.join(solutionsRoot, contest);
    if (!fs.statSync(contestDir).isDirectory()) continue;
    payload.solutions[contest] = {};
    for (const name of fs.readdirSync(contestDir)) {
      const ext = path.extname(name);
      if (!exts.includes(ext.toLowerCase())) continue;
      const id = path.basename(name, ext);
      const rel = `solutions/${contest}/${name}`;
      payload.solutions[contest][id] = {
        path: rel,
        language: languageFromExt(ext),
        code: fs.readFileSync(path.join(contestDir, name), "utf8")
      };
    }
  }
}

const outPath = path.join(siteRoot, "solutions-data.js");
fs.writeFileSync(outPath, "window.XMUOJ_SOLUTIONS_CODE = " + JSON.stringify(payload, null, 2) + ";\n", "utf8");
for (const [contest, items] of Object.entries(payload.solutions)) {
  console.log(`${contest}: ${Object.keys(items).length} solutions`);
}
console.log(`Done: ${outPath}`);
