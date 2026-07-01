# XMUOJ 题集与答案（001-026）

导出时间：2026/7/1 11:46:15
数据更新时间：2026-7-1 11:46:15

## 2026年校外实训一之剑道试炼(01李胜睿班)

请用CC或者Codex或者TRAE或者Workbuddy进行AI编程！
全面学习驾驭最新AI工具成为新时代的AI原住民！

### 001 铁令求和

- 原题：http://www.xmuoj.com/contest/359/problem/JD001/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 1 | JD001 | 第1章 持剑叩门

#### 题面

李少白第一次来到剑道宗山门前。梁嘉峰递给他两枚铁令，上面各刻着一个数。「加起来，报给我。」

#### 输入

一行，两个整数A和B，用空格隔开。

#### 输出

一个整数，即A+B的结果。

#### 提示

读入两个整数，输出它们的和。最基础的输入输出练习。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    cout << A + B;
    return 0;
}
```

### 002 铁令相乘

- 原题：http://www.xmuoj.com/contest/359/problem/JD002/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 605 | JD002 | 第1章 持剑叩门

#### 题面

梁嘉峰又递来两枚铁令。这一次他竖起两根手指——乘起来。

#### 输入

一行，两个整数A和B，用空格隔开。

#### 输出

输出 `PROD = ` 后跟A×B的结果。

#### 样例

样例 1

输入：
```text
3 9
```

输出：
```text
PROD = 27
```

#### 提示

读入两个整数，输出乘积。注意输出格式带前缀。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    cout << "PROD = " << A * B << endl;
    return 0;
}
```

### 003 四令求差

- 原题：http://www.xmuoj.com/contest/359/problem/JD003/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 608 | JD003 | 第1章 持剑叩门

#### 题面

练功房桌上摆着四枚铁令。梁嘉峰说：「A和B相乘，C和D相乘，把两个积的差报给我。」

#### 输入

一行，四个整数A、B、C、D，用空格隔开。

#### 输出

输出 `DIFFERENCE = ` 后跟A×B − C×D的结果。

#### 样例

样例 1

输入：
```text
5 6 7 8
```

输出：
```text
DIFFERENCE = -26
```

#### 提示

先乘后减，注意运算顺序和输出格式。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout <<"DIFFERENCE = " << A * B - C * D << endl;
    return 0;
}//输出案例缺少"DIFFERENCE = "
```

### 004 集市算账

- 原题：http://www.xmuoj.com/contest/359/problem/JD004/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 611 | JD004 | 第1章 持剑叩门

#### 题面

宗门集市上，赵晴儿帮账房算一笔账。已知商品编号、购买数量和单价，算出总价。

#### 输入

一行，三个数：商品编号（整数）、购买数量（整数）、单价（浮点数）。

#### 输出

输出 TOTAL = 后跟总价（数量×单价），保留两位小数。

#### 样例

样例 1

输入：
```text
12 1 5.30
```

输出：
```text
TOTAL = 5.30
```

#### 提示

总价 = 件数₁×单价₁ + 件数₂×单价₂。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    double C;
    scanf("%d%d%lf",&A,&B,&C);
    printf("TOTAL = %.2lf", B * C);
    return 0;
}
```

### 005 比武台

- 原题：http://www.xmuoj.com/contest/359/problem/JD005/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 604 | JD005 | 第1章 持剑叩门

#### 题面

山门内是一片圆形的比武台。赵晴儿指着地面：「半径是r，算算它的面积。」π取3.14159。

#### 输入

一个浮点数r，表示半径。

#### 输出

输出 `A=` 后跟面积，保留4位小数。

#### 样例

样例 1

输入：
```text
2.00
```

输出：
```text
A=12.5664
```

#### 提示

面积 = 3.14159 × r × r，注意浮点数运算和格式化输出。
原题链接

#### 答案代码

```cpp
#include <iostream>
#define pi 3.14159
using namespace std;
int main()
{
    double A;
    scanf("%lf",&A);
    printf("A=%.4lf", A * A * pi);
    return 0;
}
```

### 006 剑术考核

- 原题：http://www.xmuoj.com/contest/359/problem/JD006/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 606 | JD006 | 第1章 持剑叩门

#### 题面

入门考核有两项：剑术和心法。剑术权重3.5，心法权重7.5。赵晴儿拿到成绩后要算加权平均分。

#### 输入

两行，每行一个浮点数，分别表示剑术成绩A和心法成绩B。

#### 输出

输出 `Average = ` 后跟加权平均分，保留5位小数。

#### 样例

样例 1

输入：
```text
9.7
5.3
```

输出：
```text
Average = 6.70000
```

#### 提示

加权平均 = (A×3.5 + B×7.5) / 11。分母是权重之和，不是2。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    double a, b;
    scanf("%lf%lf",&a,&b);
    printf("Average = %.5lf", (a*3.5+b*7.5)/11.0 );
    return 0;
}
```

### 007 月底发饷

- 原题：http://www.xmuoj.com/contest/359/problem/JD007/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 609 | JD007 | 第1章 持剑叩门

#### 题面

月底发饷，李少白帮账房核算一名弟子的工钱。已知工号、出工天数和每日工钱。

#### 输入

第一行一个整数，表示工号。第二行两个数：出工天数（整数）和每日工钱（浮点数）。

#### 输出

第一行输出工号。第二行输出 `SALARY = U$ ` 后跟实发金额，保留两位小数。

#### 样例

样例 1

输入：
```text
25
100 5.50
```

输出：
```text
NUMBER = 25
SALARY = U$ 550.00
```

#### 提示

实发金额 = 出工天数 × 每日工钱。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    double b;
    int a,c;
    scanf("%d", &c);
    scanf("%d%lf",&a,&b);
    printf("NUMBER = %d\n", c);
    printf("SALARY = U$ %.2lf",a*b );
    return 0;
}
```

### 008 马匹脚力

- 原题：http://www.xmuoj.com/contest/359/problem/JD008/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 615 | JD008 | 第1章 持剑叩门

#### 题面

李少白骑马送信，跑了S公里，马匹消耗了L升草料汁。他想知道每升草料汁能支撑跑多少公里。

#### 输入

一行，两个浮点数，分别表示路程（km）和草料消耗（L）。

#### 输出

输出每升草料汁能跑的公里数，保留3位小数，后跟 km/l。

#### 样例

样例 1

输入：
```text
500 35.0
```

输出：
```text
14.286 km/l
```

#### 提示

消耗率 = 草料 / 路程，注意浮点数除法。
原题链接

#### 答案代码

```cpp
#include <iostream>
using namespace std;
int main()
{
    double a, b;
    scanf("%lf%lf",&a,&b);
    printf("%.3lf km/l",a/b );
 
    return 0;
}
```

### 009 铁球体积

- 原题：http://www.xmuoj.com/contest/359/problem/JD009/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 612 | JD009 | 第1章 持剑叩门

#### 题面

兵器库里有一颗实心铁球。李少白量出半径r，想算出它的体积。V = (4/3)πr³，π取3.14159。

#### 输入

一个浮点数r，表示铁球的半径。

#### 输出

输出 `VOLUME = ` 后跟体积，保留3位小数。

#### 样例

样例 1

输入：
```text
3
```

输出：
```text
VOLUME = 113.097
```

#### 提示

体积 = (4.0/3.0) × 3.14159 × r³，注意用浮点数除法。
原题链接

#### 答案代码

```cpp
#include <stdio.h>
int main()
{
    double r;
    scanf("%lf",&r);
    printf("VOLUME = %.3lf",(4.0/3)*3.14159*r*r*r );
    return 0;
}
```

### 010 三令比大

- 原题：http://www.xmuoj.com/contest/359/problem/JD010/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 614 | JD010 | 第1章 持剑叩门

#### 题面

梁嘉峰在墙上刻了三个数，转头说：「最大的那个，报给我。」

#### 输入

一行，三个整数A、B、C，用空格隔开。

#### 输出

输出 `Max = ` 后跟三个数中的最大值。

#### 样例

样例 1

输入：
```text
7 14 106
```

输出：
```text
Max = 106
```

#### 提示

用条件判断两两比较，或直接用max函数。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    printf("Max = %d", d);
    return 0;
}
```

### 011 哨塔测距

- 原题：http://www.xmuoj.com/contest/359/problem/JD011/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 616 | JD011 | 第1章 持剑叩门

#### 题面

赵晴儿在沙盘上标了两个哨塔的坐标(x1,y1)和(x2,y2)。她说：「算算它们之间的直线距离。」

#### 输入

一行，四个浮点数x1, y1, x2, y2，用空格隔开。

#### 输出

输出两点间的距离，保留两位小数。

#### 样例

样例 1

输入：
```text
1.0 7.0 5.0 9.0
```

输出：
```text
4.4721
```

#### 提示

使用距离公式，需要引入数学库以使用sqrt函数。
原题链接

#### 答案代码

```c
#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, l;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    l = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("%.4lf", l);//题目输出写保留两位小数有误
    return 0;
}
```

### 012 圆盘开孔

- 原题：http://www.xmuoj.com/contest/359/problem/JD012/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 613 | JD012 | 第1章 持剑叩门

#### 题面

赵晴儿在沙盘上画了五个图形，每个图形都用A、B、C三个数来定义。她让李少白算出每个图形的面积：三角形（底A高C）、圆形（半径C）、梯形（上底A下底B高C）、正方形（边长B）、长方形（长A宽B）。π取3.14159，结果保留3位小数。

#### 输入

一行，三个浮点数A、B、C。

#### 输出

五行，分别输出 TRIANGULO（三角形）、CIRCULO（圆形）、TRAPEZIO（梯形）、QUADRADO（正方形）、RETANGULO（长方形）的面积，各保留3位小数。格式为 `名称: 面积`。

#### 样例

样例 1

输入：
```text
3.0 4.0 5.2
```

输出：
```text
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000
```

#### 提示

注意输出格式：名称与面积之间有一个空格。π取3.14159。使用 printf("%.3f") 或 cout << fixed << setprecision(3) 保留3位小数。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", (a * c) / 2.0);
    printf("CIRCULO: %.3lf\n", 3.14159 * c * c);
    printf("TRAPEZIO: %.3lf\n", (a + b) * c / 2.0);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);
    return 0;
}
```

### 013 水钟报时

- 原题：http://www.xmuoj.com/contest/359/problem/JD013/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 654 | JD013 | 第1章 持剑叩门

#### 题面

宗门的水钟记录的是总秒数，但掌门要求用「时:分:秒」的格式汇报。赵晴儿让李少白帮忙转换。

#### 输入

一个整数N，表示总秒数。

#### 输出

输出 `H:M:S` 格式的时间。

#### 样例

样例 1

输入：
```text
556
```

输出：
```text
0:9:16
```

#### 提示

时 = 秒 ÷ 3600，分 = 余数 ÷ 60，秒 = 最终余数。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int t, h = 0, m = 0, s = 0;
    scanf("%d", &t);
    h = t / 3600;
    m = (t - 3600 * h) / 60;
    s = t - 3600 * h - 60 * m;
    printf("%d:%d:%d", h, m, s);
    return 0;
}
```

### 014 钱庄换银

- 原题：http://www.xmuoj.com/contest/359/problem/JD014/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 653 | JD014 | 第1章 持剑叩门

#### 题面

李少白去镇上钱庄换碎银。掌柜说：「你要换多少文？我用100、50、20、10、5、2、1面额的铜钱给你。」需要知道每种面额各要几枚。

#### 输入

一个整数N，表示要换的文数。

#### 输出

第一行输出总金额N。接下来7行，按面额从大到小，每行输出 `X nota(s) de R$ Y,00`，其中X是张数，Y是面额。

#### 样例

样例 1

输入：
```text
576
```

输出：
```text
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
```

#### 提示

贪心策略：从大到小依次整除，记录每种面额的枚数。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int money, m100 = 0, m50 = 0, m20 = 0, m10 = 0, m5 = 0, m2 = 0, m1 = 0;
    scanf("%d", &money);
    m100 = money / 100;
    m50 = (money - 100 * m100) / 50;
    m20 = (money - 100 * m100 - 50 * m50) / 20;
    m10 = (money - 100 * m100 - 50 * m50 - 20 * m20) / 10;
    m5 = (money - 100 * m100 - 50 * m50 - 20 * m20 - 10 * m10) / 5;
    m2 = (money - 100 * m100 - 50 * m50 - 20 * m20 - 10 * m10 - 5 * m5) / 2;
    m1 = money - 100 * m100 - 50 * m50 - 20 * m20 - 10 * m10 - 5 * m5 - 2 * m2;
    printf("%d\n", money);
    printf("%d nota(s) de R$ 100,00\n", m100);
    printf("%d nota(s) de R$ 50,00\n", m50);
    printf("%d nota(s) de R$ 20,00\n", m20);
    printf("%d nota(s) de R$ 10,00\n", m10);
    printf("%d nota(s) de R$ 5,00\n", m5);
    printf("%d nota(s) de R$ 2,00\n", m2);
    printf("%d nota(s) de R$ 1,00\n", m1);
    return 0;
}
```

### 015 石碑之谜

- 原题：http://www.xmuoj.com/contest/359/problem/JD015/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 665 | JD015 | 第2章 歧路逢生

#### 题面

山门前有两条路，路边各立一块石碑。赵晴儿指着石碑上的两个数说：「如果其中一个数能被另一个整除，这两块碑就是一对——走左边这条路。否则走右边。」
给定两个整数A和B，判断它们是否互为倍数关系（即A能被B整除，或B能被A整除）。

#### 输入

一行，两个整数A和B。

#### 输出

互为倍数输出 `Yes`，否则输出 `No`。

#### 样例

样例 1

输入：
```text
6 24
```

输出：
```text
Yes
```

#### 提示

判断 A%B==0 或 B%A==0，只要有一个成立就是倍数关系，输出Yes；否则输出No。

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (A % B == 0 || B % A == 0)printf("Yes");
    else printf("No");
    return 0;
}
```

### 016 三根木棍

- 原题：http://www.xmuoj.com/contest/359/problem/JD016/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 664 | JD016 | 第2章 歧路逢生

#### 题面

赵晴儿从柴堆里抽出三根木棍，量了量长度，让李少白判断它们能不能拼成一个三角形。如果能，算出周长；如果不能，算出以A、B为上下底、C为高的梯形面积，公式为 (A+B)×C÷2。

#### 输入

一行，三个浮点数A、B、C。

#### 输出

能拼成三角形输出 `Perimeter = X.X`（周长），拼不成输出 `Area = X.X`（梯形面积）。

#### 样例

样例 1

输入：
```text
6.0 4.0 2.0
```

输出：
```text
Area = 10.0
```

#### 提示

三角形成立条件：任意两边之和大于第三边。如果成立，周长=A+B+C；如果不成立，梯形面积=(A+B)*C/2。注意保留1位小数。

#### 答案代码

```c
#include <stdio.h>
#include <math.h>
int main()
{
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    if (A + B > C && B + C > A && A + C > B)printf("Perimeter = %.1lf", A + B + C);
    else printf("Area = %.1lf", (A + B) * C / 2);
    return 0;
}
```

### 017 比武时辰

- 原题：http://www.xmuoj.com/contest/359/problem/JD017/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 667 | JD017 | 第2章 歧路逢生

#### 题面

李少白和师弟在练武场比武。他们从A时开始，到B时结束（只看整点，不看分钟）。如果B>A，比武持续了B-A小时；如果B≤A，说明比武过了零点，持续了24-A+B小时；如果A=B，说明刚好持续了一整天（24小时）。

#### 输入

一行，两个整数A和B（0≤A,B≤23）。

#### 输出

输出一个整数，表示比武持续的小时数。

#### 样例

样例 1

输入：
```text
0 15
```

输出：
```text
15
```

#### 提示

用条件判断：如果B>A，输出B-A；如果B==A，输出24；否则输出24-A+B。

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (B > A)printf("%d", B - A);
    else if (A == B)printf("%d", 24);
    else if (A > B)printf("%d", 24 - A + B);
    return 0;
}
```

### 018 三石排序

- 原题：http://www.xmuoj.com/contest/359/problem/JD018/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 663 | JD018 | 第2章 歧路逢生

#### 题面

梁嘉峰在地上放了三块石头，上面各刻着一个数。他说：「从小到大排好，报给我。」

#### 输入

一行，三个整数，用空格隔开。

#### 输出

三个数从小到大输出，空格隔开。

#### 样例

样例 1

输入：
```text
7 21 -14
```

输出：
```text
-14 7 21
```

#### 提示

用条件判断两两比较确定顺序，或存入数组排序。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int a, b, c,temp = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d",c,b,a);
    return 0;
}
```

### 019 杂货铺

- 原题：http://www.xmuoj.com/contest/359/problem/JD019/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 660 | JD019 | 第2章 歧路逢生

#### 题面

山脚杂货铺有5种干粮，编号1到5，单价分别是4.00、4.50、5.00、2.00、1.50文。赵晴儿报了干粮编号和要买的数量，掌柜让她自己算总价。

#### 输入

一行，两个整数：干粮编号X和数量Y。

#### 输出

输出 `Total: R$ ` 后跟总价，保留两位小数。

#### 样例

样例 1

输入：
```text
3 2
```

输出：
```text
Total: R$ 10.00
```

#### 提示

用数组或条件判断存储5种单价，查表后乘以数量。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    int name, num;
    double price[] = { 4.00,4.50,5.00,2.00,1.50 };
    scanf("%d%d", &name, &num);
    printf("Total: R$ %.2lf", price[name - 1] * num);
    return 0;
}
```

### 020 内力分级

- 原题：http://www.xmuoj.com/contest/359/problem/JD020/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 659 | JD020 | 第2章 歧路逢生

#### 题面

宗门把弟子的内力值分成四个等级：[0,25]是入门，(25,50]是初级，(50,75]是中级，(75,100]是高级。超出100则不在评级范围内。李少白测出一名弟子的内力值，需要判断他属于哪个等级。

#### 输入

一个浮点数，表示内力值。

#### 输出

输出对应区间的名称，或 `Out of interval`（超出范围）。

#### 样例

样例 1

输入：
```text
95.29
```

输出：
```text
Interval (75,100]
```

#### 提示

用 if-elif-else 逐一判断落在哪个区间。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    float power; 
    scanf("%f", &power);
    if (power >= 0 && power <= 25) 
    {
        printf("Interval [0,25]\n");
    } 
    else if (power > 25 && power <= 50)
    {
        printf("Interval (25,50]\n");
    } 
    else if (power > 50 && power <= 75) 
    {
        printf("Interval (50,75]\n");
    } 
    else if (power > 75 && power <= 100)
    {
        printf("Interval (75,100]\n");
    } 
    else
    {
        printf("Out of interval\n");
    }

    return 0;
}
```

### 021 沙盘点位

- 原题：http://www.xmuoj.com/contest/359/problem/JD021/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 662 | JD021 | 第2章 歧路逢生

#### 题面

赵晴儿在沙盘上标了一个点P(x, y)，让李少白判断它落在第几象限，还是在坐标轴上，还是在原点。

#### 输入

一行，两个浮点数x和y。

#### 输出

输出 Q1（第一象限）、Q2（第二）、Q3（第三）、Q4（第四）、Eixo X（X轴上）、Eixo Y（Y轴上）或 Origem（原点）。

#### 样例

样例 1

输入：
```text
4.5 -2.2
```

输出：
```text
Q4
```

#### 提示

先判断是否在原点或坐标轴上（x==0 或 y==0），再判断象限。
原题链接

#### 答案代码

```c
#include <stdio.h>
int main()
{
    double x,y;
    scanf("%lf%lf", &x,&y);
    if (x > 0 && y > 0)
    {
        printf("Q1");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4");
    }
    else if (x != 0 && y == 0)
    {
        printf("Eixo X");
    }
    else if (x == 0 && y != 0)
    {
        printf("Eixo Y");
    }
    else if (x == 0 && y == 0)
    {
        printf("Origem");
    }
    return 0;
}
```

### 022 跨夜比武

- 原题：http://www.xmuoj.com/contest/359/problem/JD022/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 668 | JD022 | 第2章 歧路逢生

#### 题面

李少白和师弟比武，开始时间是A时B分，结束时间是C时D分。比武可能跨了零点。请算出比武持续了多久。

#### 输入

一行，四个整数A、B、C、D，分别表示开始的时、分和结束的时、分。

#### 输出

输出比武持续时间，格式为 `H:M`。

#### 样例

样例 1

输入：
```text
8 56 7 37
```

输出：
```text
22:41
```

#### 提示

全部转为分钟做差。如果结果≤0，加上24×60。
原题链接

#### 答案代码

```cpp
#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int A, B, C, D,temp;
    cin >> A >> B >> C >> D;
    int m1 = A * 60 + B;
	int m2 = C * 60 + D;
    if (m1 >= m2)temp = 24 * 60 + m2 - m1;
	else temp = m2 - m1;
	cout << temp / 60 << ":" << temp % 60 << endl;
    return 0;
}
```

### 023 账房调薪

- 原题：http://www.xmuoj.com/contest/359/problem/JD023/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 669 | JD023 | 第2章 歧路逢生

#### 题面

宗门账房年底调薪，按原月钱所在区间确定涨幅：0~400涨15%，400.01~800涨12%，800.01~1200涨10%，1200.01~2000涨7%，2000以上涨4%。涨幅是按整个工资乘以对应百分比，不是分段累进。
李少白拿到一名弟子的原月钱，请算出新月钱、涨了多少和涨幅百分比。

#### 输入

一个浮点数，表示原月钱。

#### 输出

三行：新月钱、涨了多少、涨幅百分比（整数带%号），金额保留两位小数。

#### 样例

样例 1

输入：
```text
400.00
```

输出：
```text
New salary: 460.00
Increase: 60.00
Percentage: 15 %
```

#### 提示

用 if-elif 判断原月钱落在哪个区间，确定涨幅百分比p。涨额 = 原月钱 × p/100，新月钱 = 原月钱 + 涨额。注意400属于0~400区间（涨15%），400.01才属于400~800区间。
原题链接

#### 答案代码

```cpp
#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;
//iomanip is used to set the precision of the output
int main()
{
    double salary;
	cin >> salary;
	if (salary >= 0 && salary <= 400)
	{
		cout << "New salary: " << fixed<< setprecision(2) <<salary * 1.15 << endl;
		cout << "Increase: " << fixed<< setprecision(2)<<salary * 0.15 << endl;
		cout << "Percentage:" << " 15 %" << endl;
	}
	else if (salary >= 400.01 && salary <= 800)
	{
		cout << "New salary: " << fixed<<setprecision(2)<<salary * 1.12 << endl;
		cout << "Increase: " << fixed<< setprecision(2)<<salary * 0.12 << endl;
		cout << "Percentage:" << " 12 %" << endl;
	}
	else if (salary >= 800.01 && salary <= 1200)
	{
		cout << "New salary: " << fixed<< setprecision(2) << salary * 1.10 << endl;
		cout << "Increase: " << fixed<<setprecision(2)<<salary * 0.10 << endl;
		cout << "Percentage:" << " 10 %" << endl;
	}
	else if (salary >= 1200.01 && salary <= 2000)
	{
		cout << "New salary: " << fixed<<setprecision(2)<< salary * 1.07 << endl;
		cout << "Increase: " << fixed<< setprecision(2)<<salary * 0.07 << endl;
		cout << "Percentage:" << " 7 %" << endl;
	}
	else if(salary>2000)
	{
		cout << "New salary: " << fixed<<setprecision(2)<< salary * 1.04 << endl;
		cout << "Increase: " << fixed<< setprecision(2)<<salary * 0.04 << endl;
		cout << "Percentage:" << " 4 %" << endl;
	}
	return 0;
}
```

### 024 五关考验

- 原题：http://www.xmuoj.com/contest/359/problem/JD024/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 657 | JD024 | 第2章 歧路逢生

#### 题面

梁嘉峰考李少白：「给你四个数A、B、C、D，同时满足以下五个条件才算过关：B大于A，D大于A，C与D之和大于A与B之和，C是正数，A是偶数。」

#### 输入

一行，四个整数A、B、C、D。

#### 输出

满足所有条件输出 `Accepted`，否则输出 `Not accepted`。

#### 样例

样例 1

输入：
```text
-87 14 68 33
```

输出：
```text
Not accepted
```

#### 提示

用逻辑与（&&/and）连接五个条件，全部为真才通过。
原题链接

#### 答案代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D; //B大于A，D大于A，C与D之和大于A与B之和，C是正数，A是偶数。
    if(A%2==0 && B>A && D>A && (C+D)>(A+B) && C>0)
    {
        cout<<"Accepted"<<endl;
    }
    else
    {
        cout<<"Not accepted"<<endl;
    }
}
```

### 025 信鸽传信

- 原题：http://www.xmuoj.com/contest/359/problem/JD025/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 671 | JD025 | 第2章 歧路逢生

#### 题面

宗门各分舵之间用信鸽传信，每个分舵有一个编号（DDD码）。李少白拿到一个编号，需要查出它对应哪个分舵：61=Brasilia，71=Salvador，11=Sao Paulo，21=Rio de Janeiro，32=Juiz de Fora，19=Campinas，27=Vitoria，31=Belo Horizonte，其他编号则输出"DDD nao cadastrado"。

#### 输入

一个整数。

#### 输出

输出对应分舵名称，或 `DDD nao cadastrado`。

#### 样例

样例 1

输入：
```text
11
```

输出：
```text
Sao Paulo
```

#### 提示

用 if-elif 链逐一比对，或用字典/映射表查找。
原题链接

#### 答案代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==61)
    {
        cout<<"Brasilia"<<endl;
    }
    else if(a==71)
    {
        cout<<"Salvador"<<endl;
    }
    else if(a==11)
    {
        cout<<"Sao Paulo"<<endl;
    }
    else if(a==21)
    {
        cout<<"Rio de Janeiro"<<endl;
    }
    else if(a==32)
    {
        cout<<"Juiz de Fora"<<endl;
    }
    else if(a==19)
    {
        cout<<"Campinas"<<endl;
    }
    else if(a==27)
    {
        cout<<"Vitoria"<<endl;
    }
    else if(a==31)
    {
        cout<<"Belo Horizonte"<<endl;
    }
    else
    {
        cout<<"DDD nao cadastrado"<<endl;
    }
}
```

### 026 木棍辨形

- 原题：http://www.xmuoj.com/contest/359/problem/JD026/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 666 | JD026 | 第2章 歧路逢生

#### 题面

梁嘉峰递来三根木棍：「先判断能不能拼成三角形。能的话，再判断是直角、锐角还是钝角三角形，以及是否等边或等腰。」判断依据：最长边的平方与另外两边平方和的关系。

#### 输入

一行，三个浮点数，表示三边长度（已从小到大排列）。

#### 输出

不能构成三角形输出 Not a triangle；能构成则按以下规则输出（每种满足的条件输出一行）：
先判断角度类型：输出 Right（直角）、Acute（锐角）或 Obtuse（钝角）之一。再判断边长类型：若三边相等输出 Equilateral（等边），若恰好两边相等输出 Isosceles（等腰），否则不输出。注意：一个三角形可能同时属于多个类型，同一类型的判断用 if 而不是 elif 才能多行输出。

#### 样例

样例 1

输入：
```text
6.0 4.0 2.0
```

输出：
```text
Not a triangle
```

样例 2

输入：
```text
5.0 5.0 5.0
```

输出：
```text
Acute
Equilateral
```

#### 提示

先验证两边之和大于第三边。若不能构成三角形则直接输出 Not a triangle 并结束。
能构成三角形时，角度类型和边长类型分别用独立的 if 判断（不要用 elif 串起来），以确保等边/等腰三角形能输出两行。
边长已从小到大排列，第三个数即最长边。
原题链接

#### 答案代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            cout<<"Right"<<endl;
        }
        else if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
        {
            cout<<"Acute"<<endl;
        }
        else
        {
            cout<<"Obtuse"<<endl;
        }
        if(a==b&&b==c)
        {
            cout<<"Equilateral"<<endl;
        }
        else if(a==b||b==c||a==c)
        {
            cout<<"Isosceles"<<endl;
        }
    }
    else
    {
        cout<<"Not a triangle"<<endl;
    }
}
```
