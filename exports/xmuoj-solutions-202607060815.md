# 西坡的题集

导出时间：2026/7/6 16:15:09
数据更新时间：2026-07-06 16:14:29

## 2026年校外实训一之剑道试炼(01李胜睿班)

请用CC或者Codex或者TRAE或者Workbuddy进行AI编程！
全面学习驾驭最新AI工具成为新时代的AI原住民！

### 001 铁令求和

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD001/
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

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD002/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 605 | JD002 | 第1章 持剑叩门

#### 题面

梁嘉峰又递来两枚铁令。这一次他竖起两根手指——乘起来。

#### 输入

一行，两个整数A和B，用空格隔开。

#### 输出

输出 `PROD = ` 后跟A×B的结果。

#### 提示

读入两个整数，输出乘积。注意输出格式带前缀。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD003/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 608 | JD003 | 第1章 持剑叩门

#### 题面

练功房桌上摆着四枚铁令。梁嘉峰说：「A和B相乘，C和D相乘，把两个积的差报给我。」

#### 输入

一行，四个整数A、B、C、D，用空格隔开。

#### 输出

输出 `DIFFERENCE = ` 后跟A×B − C×D的结果。

#### 提示

先乘后减，注意运算顺序和输出格式。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD004/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 611 | JD004 | 第1章 持剑叩门

#### 题面

宗门集市上，赵晴儿帮账房算一笔账。已知商品编号、购买数量和单价，算出总价。

#### 输入

一行，三个数：商品编号（整数）、购买数量（整数）、单价（浮点数）。

#### 输出

输出 TOTAL = 后跟总价（数量×单价），保留两位小数。

#### 提示

总价 = 件数₁×单价₁ + 件数₂×单价₂。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD005/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 604 | JD005 | 第1章 持剑叩门

#### 题面

山门内是一片圆形的比武台。赵晴儿指着地面：「半径是r，算算它的面积。」π取3.14159。

#### 输入

一个浮点数r，表示半径。

#### 输出

输出 `A=` 后跟面积，保留4位小数。

#### 提示

面积 = 3.14159 × r × r，注意浮点数运算和格式化输出。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD006/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 606 | JD006 | 第1章 持剑叩门

#### 题面

入门考核有两项：剑术和心法。剑术权重3.5，心法权重7.5。赵晴儿拿到成绩后要算加权平均分。

#### 输入

两行，每行一个浮点数，分别表示剑术成绩A和心法成绩B。

#### 输出

输出 `Average = ` 后跟加权平均分，保留5位小数。

#### 提示

加权平均 = (A×3.5 + B×7.5) / 11。分母是权重之和，不是2。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD007/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 609 | JD007 | 第1章 持剑叩门

#### 题面

月底发饷，李少白帮账房核算一名弟子的工钱。已知工号、出工天数和每日工钱。

#### 输入

第一行一个整数，表示工号。第二行两个数：出工天数（整数）和每日工钱（浮点数）。

#### 输出

第一行输出工号。第二行输出 `SALARY = U$ ` 后跟实发金额，保留两位小数。

#### 提示

实发金额 = 出工天数 × 每日工钱。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD008/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 615 | JD008 | 第1章 持剑叩门

#### 题面

李少白骑马送信，跑了S公里，马匹消耗了L升草料汁。他想知道每升草料汁能支撑跑多少公里。

#### 输入

一行，两个浮点数，分别表示路程（km）和草料消耗（L）。

#### 输出

输出每升草料汁能跑的公里数，保留3位小数，后跟 km/l。

#### 提示

消耗率 = 草料 / 路程，注意浮点数除法。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD009/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 612 | JD009 | 第1章 持剑叩门

#### 题面

兵器库里有一颗实心铁球。李少白量出半径r，想算出它的体积。V = (4/3)πr³，π取3.14159。

#### 输入

一个浮点数r，表示铁球的半径。

#### 输出

输出 `VOLUME = ` 后跟体积，保留3位小数。

#### 提示

体积 = (4.0/3.0) × 3.14159 × r³，注意用浮点数除法。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD010/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 614 | JD010 | 第1章 持剑叩门

#### 题面

梁嘉峰在墙上刻了三个数，转头说：「最大的那个，报给我。」

#### 输入

一行，三个整数A、B、C，用空格隔开。

#### 输出

输出 `Max = ` 后跟三个数中的最大值。

#### 提示

用条件判断两两比较，或直接用max函数。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD011/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 616 | JD011 | 第1章 持剑叩门

#### 题面

赵晴儿在沙盘上标了两个哨塔的坐标(x1,y1)和(x2,y2)。她说：「算算它们之间的直线距离。」

#### 输入

一行，四个浮点数x1, y1, x2, y2，用空格隔开。

#### 输出

输出两点间的距离，保留两位小数。

#### 提示

使用距离公式，需要引入数学库以使用sqrt函数。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD012/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 613 | JD012 | 第1章 持剑叩门

#### 题面

赵晴儿在沙盘上画了五个图形，每个图形都用A、B、C三个数来定义。她让李少白算出每个图形的面积：三角形（底A高C）、圆形（半径C）、梯形（上底A下底B高C）、正方形（边长B）、长方形（长A宽B）。π取3.14159，结果保留3位小数。

#### 输入

一行，三个浮点数A、B、C。

#### 输出

五行，分别输出 TRIANGULO（三角形）、CIRCULO（圆形）、TRAPEZIO（梯形）、QUADRADO（正方形）、RETANGULO（长方形）的面积，各保留3位小数。格式为 `名称: 面积`。

#### 提示

注意输出格式：名称与面积之间有一个空格。π取3.14159。使用 printf("%.3f") 或 cout << fixed << setprecision(3) 保留3位小数。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD013/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 654 | JD013 | 第1章 持剑叩门

#### 题面

宗门的水钟记录的是总秒数，但掌门要求用「时:分:秒」的格式汇报。赵晴儿让李少白帮忙转换。

#### 输入

一个整数N，表示总秒数。

#### 输出

输出 `H:M:S` 格式的时间。

#### 提示

时 = 秒 ÷ 3600，分 = 余数 ÷ 60，秒 = 最终余数。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD014/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 653 | JD014 | 第1章 持剑叩门

#### 题面

李少白去镇上钱庄换碎银。掌柜说：「你要换多少文？我用100、50、20、10、5、2、1面额的铜钱给你。」需要知道每种面额各要几枚。

#### 输入

一个整数N，表示要换的文数。

#### 输出

第一行输出总金额N。接下来7行，按面额从大到小，每行输出 `X nota(s) de R$ Y,00`，其中X是张数，Y是面额。

#### 提示

贪心策略：从大到小依次整除，记录每种面额的枚数。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD015/
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

#### 提示

原题链接
判断 A%B==0 或 B%A==0，只要有一个成立就是倍数关系，输出Yes；否则输出No。

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD016/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 664 | JD016 | 第2章 歧路逢生

#### 题面

赵晴儿从柴堆里抽出三根木棍，量了量长度，让李少白判断它们能不能拼成一个三角形。如果能，算出周长；如果不能，算出以A、B为上下底、C为高的梯形面积，公式为 (A+B)×C÷2。

#### 输入

一行，三个浮点数A、B、C。

#### 输出

能拼成三角形输出 `Perimeter = X.X`（周长），拼不成输出 `Area = X.X`（梯形面积）。

#### 提示

原题链接
三角形成立条件：任意两边之和大于第三边。如果成立，周长=A+B+C；如果不成立，梯形面积=(A+B)*C/2。注意保留1位小数。

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD017/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 667 | JD017 | 第2章 歧路逢生

#### 题面

李少白和师弟在练武场比武。他们从A时开始，到B时结束（只看整点，不看分钟）。如果B>A，比武持续了B-A小时；如果B≤A，说明比武过了零点，持续了24-A+B小时；如果A=B，说明刚好持续了一整天（24小时）。

#### 输入

一行，两个整数A和B（0≤A,B≤23）。

#### 输出

输出一个整数，表示比武持续的小时数。

#### 提示

原题链接
用条件判断：如果B>A，输出B-A；如果B==A，输出24；否则输出24-A+B。

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD018/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 663 | JD018 | 第2章 歧路逢生

#### 题面

梁嘉峰在地上放了三块石头，上面各刻着一个数。他说：「从小到大排好，报给我。」

#### 输入

一行，三个整数，用空格隔开。

#### 输出

三个数从小到大输出，空格隔开。

#### 提示

用条件判断两两比较确定顺序，或存入数组排序。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD019/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 660 | JD019 | 第2章 歧路逢生

#### 题面

山脚杂货铺有5种干粮，编号1到5，单价分别是4.00、4.50、5.00、2.00、1.50文。赵晴儿报了干粮编号和要买的数量，掌柜让她自己算总价。

#### 输入

一行，两个整数：干粮编号X和数量Y。

#### 输出

输出 `Total: R$ ` 后跟总价，保留两位小数。

#### 提示

用数组或条件判断存储5种单价，查表后乘以数量。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD020/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 659 | JD020 | 第2章 歧路逢生

#### 题面

宗门把弟子的内力值分成四个等级：[0,25]是入门，(25,50]是初级，(50,75]是中级，(75,100]是高级。超出100则不在评级范围内。李少白测出一名弟子的内力值，需要判断他属于哪个等级。

#### 输入

一个浮点数，表示内力值。

#### 输出

输出对应区间的名称，或 `Out of interval`（超出范围）。

#### 提示

用 if-elif-else 逐一判断落在哪个区间。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD021/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 662 | JD021 | 第2章 歧路逢生

#### 题面

赵晴儿在沙盘上标了一个点P(x, y)，让李少白判断它落在第几象限，还是在坐标轴上，还是在原点。

#### 输入

一行，两个浮点数x和y。

#### 输出

输出 Q1（第一象限）、Q2（第二）、Q3（第三）、Q4（第四）、Eixo X（X轴上）、Eixo Y（Y轴上）或 Origem（原点）。

#### 提示

先判断是否在原点或坐标轴上（x==0 或 y==0），再判断象限。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD022/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 668 | JD022 | 第2章 歧路逢生

#### 题面

李少白和师弟比武，开始时间是A时B分，结束时间是C时D分。比武可能跨了零点。请算出比武持续了多久。

#### 输入

一行，四个整数A、B、C、D，分别表示开始的时、分和结束的时、分。

#### 输出

输出比武持续时间，格式为 `H:M`。

#### 提示

全部转为分钟做差。如果结果≤0，加上24×60。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD023/
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

#### 提示

用 if-elif 判断原月钱落在哪个区间，确定涨幅百分比p。涨额 = 原月钱 × p/100，新月钱 = 原月钱 + 涨额。注意400属于0~400区间（涨15%），400.01才属于400~800区间。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD024/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 657 | JD024 | 第2章 歧路逢生

#### 题面

梁嘉峰考李少白：「给你四个数A、B、C、D，同时满足以下五个条件才算过关：B大于A，D大于A，C与D之和大于A与B之和，C是正数，A是偶数。」

#### 输入

一行，四个整数A、B、C、D。

#### 输出

满足所有条件输出 `Accepted`，否则输出 `Not accepted`。

#### 提示

用逻辑与（&&/and）连接五个条件，全部为真才通过。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD025/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 671 | JD025 | 第2章 歧路逢生

#### 题面

宗门各分舵之间用信鸽传信，每个分舵有一个编号（DDD码）。李少白拿到一个编号，需要查出它对应哪个分舵：61=Brasilia，71=Salvador，11=Sao Paulo，21=Rio de Janeiro，32=Juiz de Fora，19=Campinas，27=Vitoria，31=Belo Horizonte，其他编号则输出"DDD nao cadastrado"。

#### 输入

一个整数。

#### 输出

输出对应分舵名称，或 `DDD nao cadastrado`。

#### 提示

用 if-elif 链逐一比对，或用字典/映射表查找。
原题链接

#### 参考代码

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

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD026/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 666 | JD026 | 第2章 歧路逢生

#### 题面

梁嘉峰递来三根木棍：「先判断能不能拼成三角形。能的话，再判断是直角、锐角还是钝角三角形，以及是否等边或等腰。」判断依据：最长边的平方与另外两边平方和的关系。

#### 输入

一行，三个浮点数，表示三边长度。

#### 输出

不能构成三角形输出 Not a triangle；能构成则按以下规则输出（每种满足的条件输出一行）：
先判断角度类型：输出 Right（直角）、Acute（锐角）或 Obtuse（钝角）之一。再判断边长类型：若三边相等输出 Equilateral（等边），若恰好两边相等输出 Isosceles（等腰），否则不输出。注意：一个三角形可能同时属于多个类型，同一类型的判断用 if 而不是 elif 才能多行输出。

#### 提示

先验证两边之和大于第三边。若不能构成三角形则直接输出 Not a triangle 并结束。
能构成三角形时，角度类型和边长类型分别用独立的 if 判断（不要用 elif 串起来），以确保等边/等腰三角形能输出两行。
边长已从小到大排列，第三个数即最长边。
原题链接

#### 参考代码

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

### 027 怪兽辨识

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD027/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 670 | JD027 | 第2章 歧路逢生

#### 题面

迷踪林外遇到一只怪兽。赵晴儿观察了三层特征来判断它的种类：
第一层：有脊椎（vertebrate）还是无脊椎（invertebrate）；
第二层：鸟类（bird）、哺乳类（mammal）、昆虫（insect）还是环节动物（annelid）；
第三层：食性——食肉（carnivore）、食草（herbivore）、杂食（omnivore）、吸血（hematophagous）。
以下是怪兽分类图谱：
Level 1         Level 2        Level 3           Animal
---------------------------------------------------------
                +-- bird ------ carnivore ------- eagle（鹰）
                |             +-- herbivore ------ dove（鸽）
vertebrate -----+
                |             +-- omnivore ------- man（人）
                +-- mammal ----+
                              +-- herbivore ------ cow（牛）

                +-- insect ---- hematophagous ---- flea（跳蚤）
                |             +-- herbivore ------ caterpillar（毛虫）
invertebrate ---+
                |             +-- hematophagous ---- leech（水蛭）
                +-- annelid --+
                              +-- omnivore ------- earthworm（蚯蚓）
根据输入的三层特征单词，输出对应的动物英文名称。

#### 输入

三行，每行一个字符串，分别表示三层分类特征。

#### 输出

输出对应的动物名称。

#### 提示

三层嵌套 if-else：先判断第一层，再判断第二层，最后判断第三层。
原题链接

#### 参考代码

```cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first,second,third;
    cin>>first>>second>>third;
    if(first=="vertebrate")
    {
        if(second=="bird")
        {
            if(third=="carnivore")
            {
                cout<<"eagle"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"dove"<<endl;
            }
        }
        else if(second=="mammal")
        {
            if(third=="omnivore")
            {
                cout<<"man"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"cow"<<endl;
            }
        }
    }
    else if(first=="invertebrate")
    {
        if(second=="insect")
        {
            if(third=="hematophagous")
            {
                cout<<"flea"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"caterpillar"<<endl;
            }
        }
        else if(second=="annelid")
        {
            if(third=="omnivore")
            {
                cout<<"earthworm"<<endl;
            }
            else if(third=="hematophagous")
            {
                cout<<"leech"<<endl;
            }
        }
    }
}
```

### 028 田赋计算

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD028/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 672 | JD028 | 第2章 歧路逢生

#### 题面

李少白入了宗门，开始交田赋。税率分档：2000以下免税，2000.01~3000部分征8%，3000.01~4500部分征18%，4500以上部分征28%。注意是分段计税——只有超出部分按对应税率算。

#### 输入

一个浮点数，表示月收入。

#### 输出

输出 `R$ X.XX`。免税则输出 `Isento`。

#### 提示

分段计算：1000×8% + 2×18% = 80.36。每段只对超出部分征税。
原题链接

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>=0&&a<=2000)
    {
        cout<<"Isento"<<endl;
    }
    else if(a>2000&&a<=3000)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(a-2000)*0.08<<endl;
    }
    else if(a>3000&&a<=4500)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000*0.08+(a-3000)*0.18)<<endl;
    }
    else if(a>4500)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000*0.08+1500*0.18+(a-4500)*0.28)<<endl;
    }
}
```

### 029 石砖偶数

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD029/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD029 | 第3章 千回百转

#### 题面

千层塔第一层。墙上刻着一排编号从1到100的石砖。赵晴儿说：「把所有偶数编号的石砖挑出来，每行报一个。」

#### 输入

无输入。

#### 输出

输出全部偶数，每个偶数占一行。

#### 提示

原题链接
for循环从2开始，步长为2，到100结束。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    for(int i=2;i<=100;i+=2)
    {
        cout<<i<<endl;
    }
    return 0;
}
```

### 030 奇数石砖

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD030/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD030 | 第3章 千回百转

#### 题面

千层塔第二层。墙上有一排编号从1到X的石砖。梁嘉峰指着石砖说：「把所有奇数编号的报出来。」

#### 输入

一个正整数X。

#### 输出

每行一个奇数，从1到X（含）。

#### 提示

原题链接
for循环从1开始，步长为2，到X结束。如果X是偶数，最后一个奇数是X-1。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main(){
    int X;
    cin>>X;
    for(int i=1;i<=X;i+=2)
    {
        cout<<i<<endl;
    }
}
```

### 031 反复之门

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD031/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD031 | 第3章 千回百转

#### 题面

千层塔的某一层有一扇不断重复的门。每次门前出现一个数X：如果X不为0，就从1数到X；如果X为0，修炼结束。

#### 输入

若干行，每行一个整数X。以0结束。

#### 输出

对每个非零的X，输出1到X，每行一个数。每组之间空一行。

#### 提示

原题链接
外层while循环读入X，遇到0停止。内层for循环从1到X输出。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i>1)cout<<" ";
            cout<<i;
        }
        cout<<endl;
        cin>>n;
    }
}
```

### 032 六奇连珠

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD032/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD032 | 第3章 千回百转

#### 题面

梁嘉峰递给李少白一个数X：「从X之后开始，找出6个连续的奇数，一个一个报给我。」

#### 输入

一个整数X。

#### 输出

从X之后开始的6个连续奇数，每行一个。

#### 提示

原题链接
如果X是奇数，从X+2开始；如果X是偶数，从X+1开始。循环6次，每次加2。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;
    if(X%2==0)X+=1;
    for(int i=0;i<6;i++)
    {
        cout<<X<<endl;
        X+=2;
    }
    return 0;
}
```

### 033 正数清点

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD033/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD033 | 第3章 千回百转

#### 题面

赵晴儿递给李少白6个测量数据，有的是正数有的是负数。她问：「这里面有几个正数？」

#### 输入

6行，每行一个浮点数。

#### 输出

输出正数的个数，格式为 `X valores positivos`。

#### 提示

原题链接
循环读入6个数，用if判断是否>0，计数器累加。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    double a;
    int n=6,count=0;
    while(n--)
    {
        cin>>a;
        if(a>0)count++;
    }
    cout<<count<<" positive numbers"<<endl;
}
```

### 034 余数寻踪

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD034/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD034 | 第3章 千回百转

#### 题面

梁嘉峰写下了一个数N：「从1到10000，把所有除以N余数为2的数报给我。」

#### 输入

一个整数N（N>2）。

#### 输出

每行一个数，从1到10000中除以N余2的数。

#### 提示

原题链接
for循环从1到10000，if i%N==2则输出。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>9998)return 0;
    for(int i=1;i<=10000;i++)
    {
        if(i%N==2) cout<<i<<endl;
    }
    return 0;
}
```

### 035 区间计数

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD035/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD035 | 第3章 千回百转

#### 题面

赵晴儿递给李少白N个测量数据，让他数一数有多少个落在[10,20]这个区间内。

#### 输入

第一行一个整数N。第二行N个整数。

#### 输出

第一行输出 X in，X为区间内个数。第二行输出 Y out，Y为区间外个数。

#### 提示

原题链接
循环读入，判断是否 10≤X≤20，计数器累加。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int N, x;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        if(x>=10&&x<=20)
        {
            count++;
        }
    }
    cout<<count<<" in"<<endl;
    cout<<N-count<<" out"<<endl;
    return 0;
}
```

### 036 奇数求和

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD036/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD036 | 第3章 千回百转

#### 题面

梁嘉峰在墙上刻了两个数X和Y，让李少白算出X和Y之间（不含X和Y）所有奇数的和。

#### 输入

一行，两个整数X和Y（X

#### 输出

输出X和Y之间所有奇数的和。

#### 提示

原题链接
从X+1到Y-1循环，判断每个数是否为奇数，是则累加。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int X,Y,temp,sum=0;
    cin>>X>>Y;
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    if(X%2!=0)
    {
        X++;
    }
    for(int i=X+1;i<Y;i+=2)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
```

### 037 数链连珠

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD037/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD037 | 第3章 千回百转

#### 题面

梁嘉峰写下了一个起始整数A，又在第二行写了一串数。第二行里第一个正数就是N。请算出从A开始的N个连续整数的和。

#### 输入

第一行：整数A。第二行：若干整数，第一个大于0的数才是N。

#### 输出

从A开始N个连续整数之和。

#### 提示

原题链接
A固定，第二行跳过负数和零找N。从A开始循环N次累加。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int A,sum=0;
    cin>>A;
    int n;
    cin>>n;
    while(!(n>0))
    {
        cin>>n;
    }
    for(int i=A,j=0;j<n;i++,j++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
```

### 038 石中之王

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD038/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD038 | 第3章 千回百转

#### 题面

练功场上摆了一排石块，每块上面刻着一个数。赵晴儿让李少白找到最大的数，并说出它是第几块（从1开始计数）。

#### 输入

第一行一个整数N，表示石块数量。第二行N个整数。

#### 输出

输出最大值和它的位置，格式见样例。

#### 提示

原题链接
遍历时同时记录最大值和位置。

#### 参考代码

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>a;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int num=0,max=-1000;
    for(int i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            num=i;
        }
    }
    cout<<max<<endl<<num+1<<endl;
    return 0;
}
```

### 039 约数寻踪

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD039/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD039 | 第3章 千回百转

#### 题面

赵晴儿在沙盘上写下一个数N：「找出它的所有约数，从小到大列出来。」

#### 输入

一个正整数N。

#### 输出

每行一个约数，从小到大。

#### 提示

原题链接
从1到N循环，如果N%i==0则i是约数。

#### 参考代码

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
```

### 040 九九归真

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD040/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD040 | 第3章 千回百转

#### 题面

赵晴儿教李少白背乘法口诀。她写下一个数N，让李少白从1乘到10，按格式列出N的乘法表：「i x N = i*N」。

#### 输入

一个整数N。

#### 输出

10行，格式为 `i x N = i*N`。

#### 提示

原题链接
for循环从1到10，每次输出i x N = i*N。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" x "<<N<<" = "<<i*N<<endl;
    }
    return 0;
}
```

### 041 千层阵列

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD041/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD041 | 第3章 千回百转

#### 题面

千层塔的一面墙上刻着N行M列的数字阵列，每行从1开始递增，但每逢第M个位置不写数字，写SWORD。赵晴儿让李少白按这个规律把整个阵列报出来。

#### 输入

一行，两个整数N和M。

#### 输出

N行，每行M个值，最后一个用SWORD代替，值之间用空格隔开。

#### 提示

原题链接
嵌套循环，外层控制行，内层控制列。每行第M个位置输出SWORD。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int j=1,num=0;
    for(int i=1;i<=N;i++){
        num=0;
        while(num<M-1)
        {
            cout<<j<<" ";
            num++;
            j++;
        }
        cout<<"SWORD"<<endl;
        j++;
    }
    return 0;
}
```

### 042 兵刃统计

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD042/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing ??? | JD042 | 第3章 千回百转

#### 题面

演武场上，弟子们正在操练。李少白走过一排兵器架，记录了N次观察：每次看到一件兵器，C代表剑，R代表刀，F代表枪。赵晴儿让他统计每种兵器出现了多少把，以及各自的占比。

#### 输入

第一行一个整数N。接下来N行，每行一个整数（数量）和一个字符（C/R/F），分别表示某次看到的兵器数量和类型。

#### 输出

第一行输出 Total: X weapons（总数量）。接下来三行输出每种兵器的总数：Total swords: X、Total blades: X、Total spears: X。最后三行输出各自占比：Percentage of swords: XX.XX % 等，保留两位小数。

#### 提示

原题链接
三个计数器分别累加C、R、F的数量。注意每行先读数量再读类型。总数 = 所有数量之和。占比 = 各类数量 / 总数 × 100%，保留两位小数。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N; 
    int total = 0;
    int swords = 0;
    int blades = 0; 
    int spears = 0;    
    for(int i = 0; i < N; i++)
    {
        int count;
        char type;
        cin >> count >> type;  
        total += count;
        if(type == 'C')
        {
            swords += count;
        }
        else if(type == 'R')
        {
            blades += count;
        }
        else if(type == 'F')
        {
            spears += count;
        }
    }
    double percentC =(double)swords / total * 100;
    double percentR =(double)blades / total * 100;
    double percentF =(double)spears / total * 100;
    cout << "Total: " << total << " weapons" << endl;
    cout << "Total swords: " << swords << endl;
    cout << "Total blades: " << blades << endl;
    cout << "Total spears: " << spears << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage of swords: " << percentC << " %" << endl;
    cout << "Percentage of blades: " << percentR << " %" << endl;
    cout << "Percentage of spears: " << percentF << " %" << endl;
    return 0;
}
```

### 043 正剑除邪

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD043/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD043 | 第4章 排兵布阵

#### 题面

练功房的石板上有10道剑气留下的痕迹，每道痕迹上刻着一个数。其中有些数带着邪气（负数或零），梁嘉峰让李少白运起纯阳内力，把这些不纯正的数全部净化，替换成1——象征正气归于一元。

#### 输入

一行，10个整数，用空格隔开。

#### 输出

替换后的10个数，每行格式为 `X[i] = 值`。

#### 提示

原题链接
遍历数组，将≤0的元素替换为1。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main(){
    int x[10];
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    for(int i=0;i<10;i++)
    {
        // if(i<9)
        // {
            if(x[i]<=0)
            {cout<<"X["<<i<<"] = "<<1<<endl;}
            else
            {cout<<"X["<<i<<"] = "<<x[i]<<endl;}
        // }
        // else
        // {
        //     if(x[i]<0)
        //     {cout<<"x["<<i<<"] = "<<1;}
        //     else
        //     {cout<<"x["<<i<<"] = "<<x[i];}
        // }
    }

    return 0;
}
```

### 044 翻倍剑阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD044/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD044 | 第4章 排兵布阵

#### 题面

赵晴儿在沙盘上布下一个翻倍剑阵。她说：「以第一个数为起点，后面每个数都是前一个的两倍。内力如此，出剑亦是如此——一重更比一重强。」

#### 输入

一个整数V。

#### 输出

10行，格式为 `N[i] = X`。

#### 提示

原题链接
N[0]=V，循环N[i]=N[i-1]*2。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int V;
    cin >> V; 
    for(int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << V << endl;
        V = V * 2;
    }
    return 0;
}
```

### 045 剑中取精

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD045/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD045 | 第4章 排兵布阵

#### 题面

沙盘上散落着100把长剑，每把剑上刻着一个数，代表剑的品级。赵晴儿让李少白从中挑出品级不超过10的精良之剑，逐一记录。

#### 输入

100个浮点数。

#### 输出

按顺序输出所有≤10的元素，每行格式为 `A[i] = X`（保留一位小数）。

#### 提示

原题链接
遍历数组，if元素≤10则输出。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A[100];   
    for(int i = 0; i < 100; i++)
    {
        cin >> A[i];
    }  
    cout << fixed << setprecision(1);
    for(int i = 0; i < 100; i++)
    {
        if(A[i] <= 10)
        {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    return 0;
}
```

### 046 剑阵倒转

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD046/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD046 | 第4章 排兵布阵

#### 题面

沙盘上的剑阵需要倒转方向——第一把剑和最后一把交换，第二把和倒数第二把交换。梁嘉峰说：「攻守易位，前后颠倒。」

#### 输入

20个整数。

#### 输出

翻转后的20个数，每行格式为 `N[i] = X`。

#### 提示

原题链接
双指针从两端向中间交换。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int main()
{
    int a[20];
    for(int i = 0; i < 20; i++)
    {
        cin >> a[i];
    }
    int temp;
    for(int i=0;i<=9;i++)
    {
        temp=a[i];
        a[i]=a[19-i];
        a[19-i]=temp;
    }
    for(int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
```

### 047 剑锋所指

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD047/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD047 | 第4章 排兵布阵

#### 题面

练功场上一排木桩，每根木桩上刻着一个数。赵晴儿让他找到最矮的那根木桩——剑锋所向，以弱制动。找到最小值并说出它的位置（从0开始计数）。

#### 输入

第一行一个整数N。第二行N个整数。

#### 输出

第一行输出 Menor valor: X，第二行输出 Posicao: P，其中P为最小值的下标（从0开始计数）。若最小值出现多次，输出第一次出现的位置。

#### 提示

原题链接
遍历时记录当前最小值和位置。注意位置从0开始计数。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;   
    int minVal;
    int minPos = 0;   
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if(i == 0 || num < minVal)
        {
            minVal = num;
            minPos = i;
        }
    }
    cout << "Menor valor: " << minVal << endl;
    cout << "Posicao: " << minPos << endl;
    return 0;
}
```

### 048 二气相生

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD048/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD048 | 第4章 排兵布阵

#### 题面

赵晴儿在沙盘上画出两道气旋：「阴阳二气，交替相生。第一气为0，第二气为1，此后每气皆为前二气之和。只用两个变量，算出第N气。」其中F(0)=0，F(1)=1，F(N)=F(N-1)+F(N-2)。

#### 输入

一个整数N。

#### 输出

一个整数，即第N个斐波那契数F(N)。

#### 提示

原题链接
两个变量滚动：a,b = b,a+b。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    long long a=0,b=1,N,num=0;
    cin >>N;
    if(N==0)
    {
        cout << 0 << endl;
        return 0;
    }
    if(N==1)
    {
        cout << 1 << endl;
        return 0;
    }
    for(long long i=2;i<=N;i++)
    {
        num=a+b;
        a=b;
        b=num;
        
    }
    cout << num << endl;
    return 0;
}
//F1=0
//F2=0+1
//F3=1+1
//F4=1+2
//F5=2+3
```

### 049 斐波剑诀

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD049/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD049 | 第4章 排兵布阵

#### 题面

赵晴儿展开一卷古剑谱，上面记载着斐波那契剑诀：0, 1, 1, 2, 3, 5, 8, 13……「每一式都是前两式的融合。T次问询，每次报出第N式。」

#### 输入

一个整数N。

#### 输出

一行，前N个斐波那契数，空格隔开。

#### 提示

原题链接
预处理斐波那契数组到60，查询时直接取值。

#### 参考代码

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long N;
    cin >>N;
    vector<long long>a;
    a.push_back(0);
    a.push_back(1);
    for(int i=2;i<=N;i++)
    {
        long long temp;
        temp=a[i-1]+a[i-2];
        a.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
```

### 050 列阵求和

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD050/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD050 | 第4章 排兵布阵

#### 题面

梁嘉峰在沙盘上画了一个数字阵列：「从M到N，全部列出来，再算和。如果M比N大，先交换。」李少白从M一路数到N，把每个数刻在石板上。

#### 输入

若干行，每行两个整数M和N。当M和N均为非正数（≤0）时结束输入。

#### 输出

对每组M和N，从小到大输出M到N之间的所有整数（空格隔开），最后输出 Sum=X（X为这些数的和）。每组输出占一行。

#### 提示

原题链接
若M>N则先交换。注意：结束条件为两个数均≤0（测试用例可能用0 0或-1 -1）。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int M, N; 
    while(cin >> M >> N)
    {
        if(M <= 0 && N <= 0)
        {
            break;
        }
        if(M > N)
        {
            int temp = M;
            M = N;
            N = temp;
        }
        int sum = 0;
        for(int i = M; i <= N; i++)
        {
            cout << i;
            if(i < N) cout << " ";  // 最后一个数字后面不加空格
            sum += i;
        }
        cout << " Sum=" << sum << endl;
    }
    return 0;
}
```

### 051 剑行取道

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD051/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD051 | 第4章 排兵布阵

#### 题面

沙盘上一个12×12的剑阵，赵晴儿指着其中一行：「这一行的所有剑，力量之和是多少？或平均力量？」李少白逐格检视。

#### 输入

第一行一个整数L（0~11，表示行号）。第二行一个字符（S或M）。接下来12行，每行12个浮点数。

#### 输出

输出该行的和或平均值，保留一位小数。

#### 提示

原题链接
遍历指定行，根据操作类型求和或求平均。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()//测试案例存在问题
{
    int L;
    char op;
    cin >> L >> op;
    double a[12][12];
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cin >> a[i][j];
        }
    }
    double sum = 0;
    for(int j = 0; j < 12; j++)
    {
        sum += a[L][j];
    }
    cout << fixed << setprecision(1);
    if(op == 'S')
    {
        cout << sum << endl;
    }
    else if(op == 'M')
    {
        cout << sum / 12 << endl;
    }
    return 0;
}
```

### 052 剑列纵横

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD052/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD052 | 第4章 排兵布阵

#### 题面

赵晴儿又指向剑阵的其中一列：「纵览此列，算其力量。」李少白沿着列的方向逐行检视。

#### 输入

第一行一个整数C（0~11，表示列号）。第二行一个字符（S或M）。接下来12行，每行12个浮点数。

#### 输出

输出该列的和或平均值，保留一位小数。

#### 提示

原题链接
遍历所有行取指定列元素。

#### 参考代码

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int C;
    char mode;
    cin >> C >> mode;
    double sum = 0.0;
    double val;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> val;
            if (j == C) {
                sum += val;
            }
        }
    }    
    if (mode == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if(mode == 'M') {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }
       return 0;
}
```

### 053 完璧归宗

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD053/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD053 | 第4章 排兵布阵

#### 题面

赵晴儿在沙盘上写下「完璧」二字：「完璧之数，等于它的所有真因子之和。譬如6=1+2+3。找到不超过N的所有完璧之数，以印证归宗之意。」

#### 输入

一个整数N。

#### 输出

每行输出一个不超过N的完全数（从小到大）。

#### 提示

原题链接
对每个数找所有真因子求和，等于自身则是完全数。注意优化：枚举因子只需到 sqrt(X)，利用约数成对出现的性质。1 不是完全数。

#### 参考代码

```cpp
#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
// bool isPrime(LL n)
// {
//     if(n<2)return false;
//     else if(n==2)return true;
//     else if(n%2==0)return false;
//     double m=sqrt(n);
//     for(int i=3;i<=m;i+=2)
//     {
//         if(n%i==0)return false;
//     }
//     return true;

// }
#include <iostream>
using namespace std;
typedef long long LL;

int main() {
    LL N;
    cin >> N;
    if (N >= 6) cout << 6 << endl;
    if (N >= 28) cout << 28 << endl;
    if (N >= 496) cout << 496 << endl;
    if (N >= 8128) cout << 8128 << endl;
    if (N >= 33550336) cout << 33550336 << endl;
    if (N >= 8589869056LL) cout << 8589869056LL << endl;
    if (N >= 137438691328LL) cout << 137438691328LL << endl;
    if (N >= 2305843008139952128LL) cout << 2305843008139952128LL << endl;
    
    return 0;
}
//主包过不了，以后再看……


//超出时长，无法通过……
// int main() 
// {
//     LL N;
//     cin >> N;
//     for (LL i = 2; i <= N; i+=2) {
//         if(isPrime(i))continue;
//         LL sum = 1;
//         LL m=sqrt(i);
//         for (int j = 2; j <= m; j++) {
//             if (i % j == 0) {
//                 sum += j;   
//                 if(j!=i/j)
//                 sum+=i/j;
//             }
//         }
//         if (sum == i) {
//             cout << i << endl;
//         }
    
//     }
//     return 0;
// }
```

### 054 剑意之质

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD054/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD054 | 第4章 排兵布阵

#### 题面

梁嘉峰在沙盘上点出几枚剑棋：「天下剑法，有些可以拆分化简，有些不可再分，乃剑意之基石。这些不可拆分的棋位——只能被1和自己整除的数——就是剑意之质。排出2到N之间所有的剑意质数。」

#### 输入

一个整数N。

#### 输出

输出2到N之间所有的质数，每行一个。

#### 提示

原题链接
对每个数从2到√n试除。

#### 参考代码

```cpp
#include<iostream>
#include<cmath>
using namespace std;
typedef long long LL;
bool isPrime(LL n)
{
    if(n==1)return false;
    else if(n==2)return true;
    else if(n%2==0&&n!=2)return false;
    //double m=sqrt(n);
    for(LL i=3;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
 int main()
 {
    LL N;
    cin>>N;
    for(LL i=2;i<=N;i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
 }
```

### 055 上方剑域

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD055/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD055 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第一宫——乾宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护乾宫的剑灵凌空画出一道剑气光幕，说道：
「此乃乾宫剑阵之上方剑域。两条对角线将方阵切为上下左右四块。上方区域位于两条对角线的上方交汇处——即行号小于列号（i < j），且行号加列号之和小于 11（i + j < 11）的格子。此处灵力承天位之力，主攻正前方。尔需计算此域所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
先读操作类型（S求和/M求平均），再判断行号。上方区域即i

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j<11&&i<j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
```

### 056 下方剑域

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD056/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD056 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第二宫——坤宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护坤宫的剑灵指向光幕下方，说道：
「此乃坤宫剑阵之下方剑域。两条对角线将方阵切为上下左右四块。下方区域位于两条对角线的下方交汇处——即行号大于列号（i > j），且行号加列号之和大于 11（i + j > 11）的格子。此处灵力承地脉之气，势沉力猛。尔需计算此域所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
下方区域即i>j的元素。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j>11&&i>j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
```

### 057 左方剑域

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD057/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD057 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第三宫——震宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护震宫的剑灵指向光幕左侧，说道：
「此乃震宫剑阵之左方剑域。两条对角线将方阵切为上下左右四块。左方区域位于两条对角线的左侧交汇处——即行号大于列号（i > j），且行号加列号之和小于 11（i + j < 11）的格子。此处灵力守青龙之位，主防御。尔需计算此域所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
左方区域即满足j < i && i + j < 11的元素（主对角线下且反对角线上）。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j<11&&i>j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
```

### 058 右方剑域

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD058/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD058 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第四宫——巽宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护巽宫的剑灵指向光幕右侧，说道：
「此乃巽宫剑阵之右方剑域。两条对角线将方阵切为上下左右四块。右方区域位于两条对角线的右侧交汇处——即行号小于列号（i < j），且行号加列号之和大于 11（i + j > 11）的格子。此处灵力据白虎之位，主进攻。尔需计算此域所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
右方区域即满足j > i && i + j > 11的元素（主对角线上且反对角线下）。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j>11&&i<j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
```

### 059 右上剑角

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD059/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD059 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第五宫——离宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护离宫的剑灵指向沙盘右上，说道：
「此乃离宫剑阵之右上剑角。仅以主对角线为界——右上区域即所有行号小于列号（i < j）的格子，主对角线右上方的那一半。此处为天乾之位，日升之处，剑势腾空而起。尔需计算此角所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出右上半部分的和或平均值，保留一位小数。

#### 提示

原题链接
右上部分即j>i的元素。S求和，M求平均。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i<j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
```

### 060 左上剑角

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD060/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD060 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第六宫——坎宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护坎宫的剑灵指向沙盘左上，说道：
「此乃坎宫剑阵之左上剑角。仅以副对角线为界——左上区域即所有行号加列号之和小于 11（i + j < 11）的格子，副对角线左上方的那一半。此处为天坤之位，月落之处，剑气如新月之弧。尔需计算此角所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
左上部分即i+j<11的元素。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j<11)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
```

### 061 右下剑角

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD061/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD061 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第七宫——艮宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护艮宫的剑灵指向沙盘右下，说道：
「此乃艮宫剑阵之右下剑角。仅以副对角线为界——右下区域即所有行号加列号之和大于 11（i + j > 11）的格子，副对角线右下方的那一半。此处为地乾之位，日落之处，剑势如残阳下沉。尔需计算此角所有灵力之和——或取其均值——方可破阵。」
第一行输入一个大写字母：S 求和，M 求平均值。
接下来 12 行，每行 12 个浮点数，表示剑阵各格的灵力值。输出保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
右下部分即满足i + j > 11的元素（反对角线以下）。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j>11)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
```

### 062 左下剑角

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD062/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD062 | 第5章 十二宫剑阵

#### 题面

李少白来到十二宫剑阵的第六宫——坤宫。地面是一幅 12×12 的方格阵，每个格子中浮现一个浮动的数字，那是剑阵积蓄的灵力值。
守护坤宫的剑灵指向地面，说道：
「此乃坤宫剑阵。从西北到东南，一条主对角线将方阵一分为二。对角线之左下方（即行号大于列号的格子），是为地坤之位。此处灵力如初月升空，自下而上，自左而右，渐次铺展。尔需计算此区域所有灵力之和——或取其均值——方可破阵。」
具体来说：一个 12×12 的方阵，行号 i 和列号 j 均从 0 到 11（或从 1 到 12）。左下区域定义为所有满足 i > j（行号严格大于列号）的格子，即主对角线以下的部分。如下图所示（绿色区域即为左下区域）：
     列0 列1 列2 ...      列11
行0   \  .   .   .   .   .
行1   绿  \  .   .   .   .
行2   绿  绿  \  .   .   .
 ...  绿  绿  绿  \  .   .
行11  绿  绿  绿  绿  绿  \
第一行输入一个大写字母：S 表示求左下区域所有灵力之和，M 表示求平均值。
接下来 12 行，每行 12 个浮点数，表示 12×12 剑阵中每个格子的灵力值。
输出所求的和或平均值，保留一位小数。

#### 输入

第一行一个大写字母S或M。接下来12行，每行12个浮点数。

#### 输出

输出对应区域的和或平均值，保留一位小数。

#### 提示

原题链接
左下部分即满足j < i的元素（主对角线以下）。

#### 参考代码

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i>j)sum+=a[i][j];
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
```

### 063 方圆初阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD063/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD063 | 第5章 十二宫剑阵

#### 题面

「此乃方圆剑阵——最外圈剑气最淡，标记为1；往里一圈剑气渐浓，标记为2。」赵晴儿在沙盘上画出一圈圈剑芒，「到剑阵中心，剑气愈凝愈实。每一圈剑芒的强度，就是你离外界最远的那道剑气的距离。」

#### 输入

多行，每行一个整数N。N=0时结束。

#### 输出

每个N输出一个N阶矩阵，每个数字占3个字符宽度。每个矩阵后跟一个空行。

#### 提示

原题链接
每个位置的值 = min(i+1, j+1, N-i, N-j)，即到四条边的最小距离。

#### 参考代码

```cpp
#include <iostream>
#include<iomanip>
using namespace std;
int a[1001][1001];
int N;

int min(int a,int b,int c,int d)
{
    int m1=a>b?b:a;
    int m2=c>d?d:c;
    return m1>m2?m2:m1;
}

void handle(int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j]=min(i+1,j+1,N-i,N-j);
        }
    }
}

int main() {
    cin>>N;
    while(N!=0)
    {
        handle(N);
        for(int i=0;i<N;i++)
        {
            {
                for(int j=0;j<N;j++)
                cout<<setw(3)<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>N;
    }
    return 0;
}
```

### 064 镜像方阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD064/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD064 | 第5章 十二宫剑阵

#### 题面

「此阵以主对角线为镜——镜中剑影，左右互映。」赵晴儿落下第一柄长剑，「主对角线上的剑势最强，为1；往右上和左下方逐次递减，如剑光在水面的倒影越远越淡。」

#### 输入

多行，每行一个整数N。N=0时结束。

#### 输出

每个N输出一个N阶矩阵，每个数字占3个字符宽度。每个矩阵后跟一个空行。

#### 提示

原题链接
M[i][j] = |i-j|+1。对角线为1，离对角线越远数越大。

#### 参考代码

```cpp
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a[1001][1001];
int N;
int main() {
    cin>>N;
    while(N!=0)
    {
        for(int i=0;i<N;i++)
        {
            {
                for(int j=0;j<N;j++)
                {
                    a[i][j]=int(abs(i-j)+1);
                    cout<<setw(3)<<a[i][j];
                }
            }
            cout<<endl;
        }
        if(N!=0)cout<<endl;
        cin>>N;
        
    }
    return 0;
}
```

### 065 倍增方阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD065/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD065 | 第5章 十二宫剑阵

#### 题面

「此阵每一格，剑气强度皆由剑气原点(0,0)倍增而来。」赵晴儿剑尖轻点沙盘，「位在(i,j)的剑势，强度为2的(i+j)次方。一生二，二生四，剑气倍增如潮水蔓延。」

#### 输入

多行，每行一个整数N（0≤N≤15）。N=0时结束。

#### 输出

每个N输出一个N阶矩阵，每行N个整数用空格隔开。每个矩阵后跟一个空行。

#### 提示

原题链接
M[i][j] = 2^(i+j)。用位运算 1<<(i+j) 或 pow函数。

#### 参考代码

```cpp
#include <iostream>
#include <cmath>  // 用于 pow
using namespace std;

int main() {
    int N;
    while(cin >> N && N != 0) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                cout << (int)pow(2, i + j)<< " "; 
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
```

### 066 蛇形剑阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD066/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD066 | 第5章 十二宫剑阵

#### 题面

「剑阵蜿蜒如蛇，以身引气，气走周身。」赵晴儿在沙盘上画了一个n行m列的剑阵，「从左上角开始，依次填入从1到n×m的剑气。行到尽头便拐弯，似灵蛇折返。」

#### 输入

一行，两个整数n和m。

#### 输出

n行，每行m个整数用空格隔开。输出后跟一个空行。

#### 提示

原题链接
模拟蛇形遍历：右→下→左→上循环。维护四个边界。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

//参考AcWing代码
const int N=200;
int arr[N][N];

int main()
{
    int n,m;
    cin>>n>>m;
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    int x=0,y=0,d=0;
    for(int i=1;i<=n*m;i++)
    {
        arr[x][y]=i;
        int a=x+dx[d],b=y+dy[d];
        if(a>=n||a<0||b<0||b>=m||arr[a][b])
        {
            d=(d+1)%4;//向右为1，向下为2，向左为3，向上为4
            a=x+dx[d],b=y+dy[d];
        }
        x=a,y=b;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

### 067 古卷测长

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD067/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD067 | 第6章 古卷密文

#### 题面

梁嘉峰递给李少白一卷竹简：「上面刻着一行字，告诉我它有多长。」

#### 输入

一行字符串（长度不超过100），可能包含空格。

#### 输出

输出字符串的实际长度。

#### 提示

原题链接
读入一行字符串（含空格），输出其长度。

#### 参考代码

```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i;
    getline(cin,a);
    for(i=0;a[i]!='\0';i++)
    {
    
    }
    cout<<i<<endl;
}
```

### 068 密文留白

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD068/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD068 | 第6章 古卷密文

#### 题面

古卷上的字太密了，赵晴儿让李少白在每个字符后面加一个空格，方便辨认。

#### 输入

一行字符串（长度不超过100）。

#### 输出

每个字符后加一个空格输出（最后一个字符后也有空格）。

#### 提示

原题链接
遍历字符串，每个字符后输出一个空格。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i]<<" ";
    }
}
```

### 069 墨迹遮字

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD069/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD069 | 第6章 古卷密文

#### 题面

古卷上有些字被墨迹遮住了，需要替换成'#'，露出可辨认的文字。

#### 输入

一行字符串（长度不超过100，全大写）。第二行一个字符，表示要替换的字符。

#### 输出

替换后的字符串。

#### 提示

原题链接
遍历字符串，遇到目标字符输出'#'，否则输出原字符。

#### 参考代码

```cpp
#include<iostream>//输入样例有误
#include<string>
using namespace std;
int main()
{
    string a;
    char b;
    cin>>a;
    cin>>b;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)a[i]='#';
    }
    cout<<a<<endl;
}
```

### 070 经文重构

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD070/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD070 | 第6章 古卷密文

#### 题面

赵晴儿递给李少白一段经文a，让他按规则重新构造一段经文b：每个位置b[i]的ASCII值等于a[i]和a[i+1]的ASCII值之和。

#### 输入

一行字符串a（长度3~100）。

#### 输出

构造后的字符串b。

#### 提示

原题链接
遍历a，b[i] = chr(ord(a[i]) + ord(a[i+1]))。最后一个用a[-1]和a[0]。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>


int main()
{
    string a;
    char b[200];
    getline(cin,a);  
    int i;
    for(i=0;a[i+1]!='\0';i++)
    {
        b[i]=a[i]+a[i+1];
    }
    b[i]=a[0]+a[i];
    b[i+1]='\0';
    cout<<b;
}
```

### 071 密文数符

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD071/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD071 | 第6章 古卷密文

#### 题面

赵晴儿递给李少白一行密文，里面混着文字和数字。她说：「数一数有几个数字字符。」

#### 输入

一行字符（长度不超过100）。

#### 输出

输出其中数字字符（'0'~'9'）的个数。

#### 提示

原题链接
遍历字符串，判断每个字符是否在'0'到'9'之间。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>


int main()
{
    string a;
    getline(cin,a);  
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
            count++;
    }
    cout<<count<<endl;
}
```

### 072 拳掌对决

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD072/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD072 | 第6章 古卷密文

#### 题面

李少白和师弟在练功间隙玩猜拳游戏。每人出 Scissors（剪刀）、Rock（石头）或 Paper（布），按照相克规则判断胜负：Rock 胜 Scissors，Scissors 胜 Paper，Paper 胜 Rock。

#### 输入

一行，两个字符串，分别表示 Player1 和 Player2 出的拳（Scissors、Rock 或 Paper）。

#### 输出

输出结果：Player1 赢输出 Player1，Player2 赢输出 Player2，平局输出 Tie。

#### 提示

先判断双方是否相等（平局）。否则按相克规则判断：Rock 胜 Scissors，Scissors 胜 Paper，Paper 胜 Rock，构成一个循环克制链。
原题链接

#### 参考代码

```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    if(a == b)
        cout << "Tie" << endl;
    else if((a == "Rock" && b == "Scissors") ||
            (a == "Scissors" && b == "Paper") ||
            (a == "Paper" && b == "Rock"))
        cout << "Player1" << endl;
    else
        cout << "Player2" << endl;
    
    return 0;
}
```

### 073 经文加密

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD073/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD073 | 第6章 古卷密文

#### 题面

古卷需要加密保存。加密规则：每个字母后移一位（z→a），每个数字后移一位（9→0），其他字符不变。

#### 输入

一行字符串（长度不超过100）。

#### 输出

加密后的字符串。

#### 提示

原题链接
遍历字符串，对字母、数字分别做+1循环偏移，其他字符原样输出。

#### 参考代码

```cpp
#include<iostream>
using namespace std;//数字不加密！
#include<string>
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='y'||a[i]>='A'&&a[i]<='Y')
            a[i]+=1;
        else if(a[i]=='Z')a[i]='A';
        else if(a[i]=='z')a[i]='a';
        //else if(a[i]=='9')a[i]='0';
    }
    cout<<a<<endl;
    return 0;
}
```

### 074 古卷替换

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD074/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD074 | 第6章 古卷密文

#### 题面

古卷上的某个词需要全部替换成另一个词。赵晴儿让李少白逐词核对。

#### 输入

三行：第一行原文字符串，第二行要替换的词A，第三行替换成的词B。

#### 输出

替换后的字符串。

#### 提示

原题链接
字符串替换函数，或按空格分割单词逐个比较替换。

#### 参考代码

```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;//

int main()
{
    string line, A, B;
    getline(cin, line);
    cin >> A >> B;

    stringstream ss(line);
    string word, result;
    bool first = true;
    while (ss >> word) {
        if (!first) result += " ";
        if (word == A)
            result += B;
        else
            result += word;
        first = false;
    }

    cout << result << endl;
    return 0;
}
```

### 075 寻最长词

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD075/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD075 | 第6章 古卷密文

#### 题面

赵晴儿指着古卷上的一句话：「找出最长的那个词。」

#### 输入

一行，以'.'结尾的英文句子（长度不超过500）。

#### 输出

最长的单词。

#### 提示

原题链接
按空格分割单词（去掉末尾的'.'），遍历比较长度。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>
int main()
{
    char a[501][20];
    string str;
    int count=0,b[501]={0};
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;;j++,i++)
        {
            if(str[i]==' '||str[i]=='.'){
                b[count++]=j;
                str[i]='\0';
                break;
            }
            a[count][j]=str[i];
        }
    }
    int max=-1,m=0;
    for(int i=0;b[i]!=0;i++)
    {
        if(b[i]>max){
            max=b[i];
            m=i;
        }
    }
    cout<<a[m]<<endl;
}
```

### 076 古卷插字

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD076/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD076 | 第6章 古卷密文

#### 题面

梁嘉峰递给李少白两段古卷残篇，要把后一段插到前一段ASCII码最大的字符后面。

#### 输入

两行，第一行一个字符串str，第二行一个字符串substr。

#### 输出

每行输出插入后的字符串。

#### 提示

原题链接
找到str中ASCII码最大的字符（若有多个取最后一个），在其后面插入substr。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string str,substr;
    getline(cin,str);
    getline(cin,substr);
    char max='A' ;
    int m=0,n=substr.length();
    int len=str.length();
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>max)
        {
            max=str[i];
            m=i;
        }
    } \
    str.resize(len+n); 
    //insert(max+1,substr);
    for(int i=len;i>m;i--)
    {
        str[i+n]=str[i];
    }
    for(int i=m+1,j=0;substr[j]!='\0';i++,j++)
    {
        str[i]=substr[j];
    }
    cout<<str;
}
```

### 077 独字寻踪

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD077/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD077 | 第6章 古卷密文

#### 题面

古卷上有些字重复出现，有些只出现一次。赵晴儿让李少白找到第一个只出现一次的字符。

#### 输入

一行只包含小写字母的字符串。

#### 输出

第一个只出现一次的字符，或"no"。

#### 提示

原题链接
先统计每个字符出现次数，再从头遍历找第一个次数为1的。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string a;
    int c[26]={0};
    getline(cin,a);
    char m;
    for(int i=0;a[i]!='\0';i++)
    {
        c[a[i]-'a']++;
        
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(c[a[i]-'a']==1)
        {
            cout<<a[i]<<endl;
            break;
        } 
        if(a[i+1]=='\0')
        {
            cout<<"no"<<endl;
        }
    }
}
```

### 078 两卷对校

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD078/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD078 | 第6章 古卷密文

#### 题面

赵晴儿拿着两卷古卷：「看看第二段经文是不是第一段中的一部分——如果是，就算对上了。」

#### 输入

第一行字符串a。第二行字符串b。

#### 输出

b是a的子串输出yes，否则输出no。

#### 提示

原题链接
遍历a的每个位置，用strncmp比较是否与b匹配。

#### 参考代码

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> a;
    string s;
    while (getline(cin, s)) {
        a.push_back(s);
    }
    if (a.size() >= 3) {
        cout << (a[1].find(a[2]) != string::npos ? "yes" : "no") << endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// #include<string>
// #include<cstring>
// int main()
// {
//     int a;
//     //cin>>a;
//     cin.ignore();
//     bool found=false;
//     string str1,str2;
//     getline(cin,str1);
//     getline(cin,str2);
//     int len1=str1.length(),len2=str2.length();
//     for(int i=0;i<len1-len2+1;i++)
//     {
//         bool res=true;
//         for(int j=0,k=i;str2[j]!='\0';j++,k++)
//         {
//             if(str1[k]!=str2[j])
//             {
//                 res=false;
//                 break;
//             }

//         }
//         if(res==true)
//         {
//             found=true;
//             break;
//         }
//     }
//     if(found==true)
//     {
//         cout<<"yes";
//     }
//     else if(found==false)
//     {
//         cout<<"no";
//     }

// }
```

### 079 经文周期

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD079/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD079 | 第6章 古卷密文

#### 题面

赵晴儿指着一篇重复的经文：「这段文字是某个子串重复几次写成的？找出最小的重复次数。」

#### 输入

一行字符串。

#### 输出

对于每个输入的字符串（遇到"."为止），输出一行一个整数n，表示该字符串最多由n个子串重复构成。

#### 提示

原题链接
枚举周期p（p是len的因子），检查s[0:p]重复len/p次是否等于原串。

#### 参考代码

```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    while(cin >> s && s != ".")
    {
        int n = s.length();
        for(int len = 1; len <= n; len++)
        {
            if(n % len == 0)
            {
                bool ok = true;
                for(int i = len; i < n; i++)
                {
                    if(s[i] != s[i % len])
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok)
                {
                    cout << n / len << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
```

### 080 密文跨距

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD080/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD080 | 第6章 古卷密文

#### 题面

梁嘉峰递给李少白一长段密文和两个短码S1、S2：「S1在左，S2在右，不交叉。最大间距是多少？」

#### 输入

一行，三个字符串用逗号隔开：S,S1,S2。

#### 输出

最大跨距。不满足条件输出-1。

#### 提示

原题链接
从左往右找S1最后出现的位置end1，从右往左找S2最后出现的位置start2。如果end1

#### 参考代码

```cpp
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char a[1000]={0},b[100]={0},c[100]={0};
    char s;
    cin>>s;
    for(int i=0;s!=',';i++)
    {
        a[i]=s;
        cin>>s;
    }

    cin>>s;
    for(int i=0;s!=',';i++)
    {
        b[i]=s;
        cin>>s;
    }
    cin>>s;
    for(int i=0;s!=','&&s!='\n'&&cin;i++)
    {
        c[i]=s;
        cin>>s;
    }

    int m=-1,n=-1;
    for(int i=0;a[i]!='\0';i++)
    {
        bool flag=false;
        int found=1;
        for(int j=i,k=0;b[k]!='\0';k++,j++)
        {
            if(a[j]!=b[k])
            {
                found=0;break;
            }
        }
        if(found)
        {
            flag=true;
            m=i+strlen(b);
            break;
        }
    }
    for(int i=strlen(a);i>=m;i--)
    {
        bool flag=false;
        int found=1;
        for(int j=i,k=0;c[k]!='\0';k++,j++)
        {
            if(a[j]!=c[k])
            {
                found=0;break;
            }
        }
        if(found)
        {
            flag=true;
            n=i;
            break;
        }
    }
    if(m==-1||n==-1){
        cout<<-1;
        return 0;
    }
    else {
        cout<<n-m;
    }

}
```

### 081 初窥阶乘

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD081/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD081 | 第7章 以招创招

#### 题面

李少白在丹房帮赵晴儿炼丹。丹方上写着："取n味药材，第一味放1份，第二味放2份，第三味放3份……第n味放n份。"
赵晴儿问："n味药材总共需要多少份？"
李少白拿出笔从头算：1×2×3×……×n。赵晴儿摇头："每次都要从头算，太慢了。把它封装成一个函数，以后直接调用。"
请帮李少白编写一个函数，计算n的阶乘（n!）。

#### 输入

一个整数n（0 ≤ n ≤ 10）。

#### 输出

输出n的阶乘。

#### 提示

原题链接
函数内用循环累乘，或递归实现。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int jiecheng(int n)
{
    int res=1;
    if(n==1)return 1;
    else res*=n*jiecheng(n-1);
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<jiecheng(n);
}
```

### 082 比剑取大

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD082/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD082 | 第7章 以招创招

#### 题面

兵器库里，赵晴儿和李少白各自挑了一柄剑。赵晴儿的剑重x斤，李少白的剑重y斤。
赵晴儿说："我们总要比谁的剑更重，每次都手算太麻烦。写一个函数，传入两个数，返回较大的那个。以后比试直接调用就行。"
请帮他们实现这个函数。

#### 输入

一行，两个整数x和y。

#### 输出

输出最大值。

#### 提示

原题链接
函数内用 if 比较或三元表达式。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int max(int m,int n)
{
    if(m>n)return m;
    else return n;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<max(m,n);
}
```

### 083 剑气归正

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD083/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD083 | 第7章 以招创招

#### 题面

李少白在练剑气外放时，需要计算剑气落点与自己的距离。距离本该是正数，但有时算出的结果是负数——因为方向搞反了。
赵晴儿说："别每次遇到负数就手动取反，写一个函数，不管传入正数还是负数，都返回它的绝对值。"

#### 输入

一个整数x。

#### 输出

输出x的绝对值。

#### 提示

原题链接
if x < 0: return -x, else: return x。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int abs(int n)
{
    if(n>=0)return n;
    else return -n;
}
int main()
{
    int m;
    cin>>m;
    cout<<abs(m);
}
```

### 084 双剑互易

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD084/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD084 | 第7章 以招创招

#### 题面

梁嘉峰在教李少白一套双剑术。左右手各持一剑，攻守之间需要不断交换位置。
"实战中你不能把剑放到地上再捡起来，"梁嘉峰说，"直接交换。写一个函数，传入两个变量的引用，在函数内部交换它们的值。"
李少白提笔写下函数签名，却犯了难——C++里普通参数只传值，改不了外面的变量。

#### 输入

一行，两个整数x和y。

#### 输出

交换后的x和y。

#### 提示

原题链接
C++用引用参数 `void swap(int &x, int &y)`。Python中 a, b = b, a。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    swap(m,n);
    cout<<m<<" "<<n;
}
```

### 085 辗转相除

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD085/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD085 | 第7章 以招创招

#### 题面

赵晴儿在药圃里采了a株紫芝和b株青蒿，要把它们扎成相同大小的药束，每束株数相同且不能有剩余。
"这其实就是求a和b的最大公约数，"赵晴儿说，"古人有个妙法叫辗转相除——用大数除以小数取余，再用小数除以余数，反复如此，直到余数为零。最后一个非零余数就是答案。"
请帮赵晴儿写一个函数，用辗转相除法求两个正整数的最大公约数。

#### 输入

一行，两个正整数a和b。

#### 输出

输出a和b的最大公约数。

#### 提示

原题链接
辗转相除法：gcd(a,b) = gcd(b, a%b)，当b==0时返回a。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;
    if(b>a)swap(a,b);
    n=a%b;
    while(n!=0)
    {
        a=n;
        swap(a,b);
        n=a%b;
    }
    cout<<b;
}
```

### 086 剑阵复制

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD086/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD086 | 第7章 以招创招

#### 题面

赵晴儿在沙盘上摆了一个剑阵（数组a），需要原样复制一份到另一个沙盘（数组b）上。
"手抄太慢，"赵晴儿说，"写一个函数，把a的前size个元素复制到b对应的位置上。"
李少白接过两个沙盘，发现b上原来也有数字，只需覆盖前size个位置，其余保持不变。

#### 输入

第一行两个整数n和size（数组长度和复制个数）。第二行n个整数。

#### 输出

复制后的数组，空格隔开。

#### 提示

原题链接
函数内循环，b[i] = a[i]，复制前size个元素。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    int n1,n2,m;
    cin>>n1>>n2>>m;
    int a[200]={0},b[200]={0};
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cout<<b[i]<<" ";
    }
}
```

### 087 剑阵翻转

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD087/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD087 | 第7章 以招创招

#### 题面

梁嘉峰在沙盘上摆了一排石块，每块上刻着一个数字。他指着前size块说："剑阵需要反转——把第一个和最后一个交换，第二个和倒数第二个交换，依此类推。后面的石块不动。"
请帮李少白写一个函数，将数组的前size个元素原地翻转。

#### 输入

第一行两个整数n和size。第二行n个整数。

#### 输出

翻转前size个元素后的数组，空格隔开。

#### 提示

原题链接
双指针从两端向中间交换，只交换前size个。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int n,size,a[2000];
    cin>>n>>size;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    for(int i=size;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
```

### 088 印数成招

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD088/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD088 | 第7章 以招创招

#### 题面

宗门兵器库盘点时，赵晴儿需要把清单上的前几件兵器名称逐一打印出来。清单上有n件兵器，但她只需要前size件。
"每次都手动抄写太蠢了，"赵晴儿说，"写一个函数，传入数组和size，把前size个元素打印出来。"

#### 输入

第一行两个整数n和size（数组长度和待打印个数，size ≤ n）。第二行n个整数。

#### 输出

输出数组的前size个元素，空格隔开，末尾换行。

#### 提示

原题链接
函数内遍历数组前size个元素，空格隔开输出。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int main()
{
    int n,size,a[2000];
    cin>>n>>size;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
```

### 089 印阵成招

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD089/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD089 | 第7章 以招创招

#### 题面

赵晴儿在沙盘上画了一个row行col列的剑阵图，每个格子标着一个数字。她需要把这个阵图工整地抄录到竹简上。
"写一个函数，"赵晴儿说，"传入二维数组和行列数，按格式逐行打印。每行的数字用空格隔开，数字之间用空格隔开。"

#### 输入

第一行两个整数row和col。接下来row行，每行col个整数。

#### 输出

矩阵元素，每行末尾无多余空格。

#### 提示

原题链接
嵌套循环遍历行列，注意行末空格处理。

#### 参考代码

```cpp
// 每行末尾有空格
#include<iostream>
using namespace std;
int main()
{
    int a[200][200],row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //cout<<" ";
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    


}
```

### 090 剑阵排序

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD090/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD090 | 第7章 以招创招

#### 题面

赵晴儿拿着一份兵器清单来找李少白："这份清单前半段乱得很，从第l件到第r件需要按重量从小到大排好，后面的顺序不变。"
李少白接过清单，发现上面有n件兵器的重量。他想写一个通用的排序函数，只排a[l]到a[r]这一段，其余位置原封不动。

#### 输入

第一行三个整数n、l和r（数组长度、排序区间左端点和右端点，0 ≤ l ≤ r < n）。第二行n个整数。

#### 输出

排序后的数组，空格隔开。

#### 提示

原题链接
对a[l]到a[r]排序，其余元素不变。可用冒泡、选择或库函数。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<algorithm>
int a[200000];
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a+l,a+r+1);//左闭右开
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
```

### 091 递归阶乘

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD091/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD091 | 第7章 以招创招

#### 题面

李少白在丹房翻到一本古籍，上面记载着一种"以丹炼丹"的奇术——要炼n味丹药，先炼好n-1味；要炼n-1味，先炼好n-2味……直到只剩1味，直接炼成。
赵晴儿看了笑道："这就是递归。一个函数调用自己，层层深入，直到触底再层层返回。阶乘的定义本身就是递归的——fact(n) = n × fact(n-1)，fact(1) = 1。"
"用递归重新实现阶乘函数。"

#### 输入

一个整数n。

#### 输出

输出n的阶乘。

#### 提示

原题链接
递归三要素：终止条件(n==1返回1)、递推关系(n*fact(n-1))、缩小规模。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int jiecheng(int n)
{
    int res=1;
    if(n==1)return 1;
    else res*=n*jiecheng(n-1);
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<jiecheng(n);
}
```

### 092 递归斐波

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD092/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD092 | 第7章 以招创招

#### 题面

赵晴儿在沙盘上画出一串数字：1, 1, 2, 3, 5, 8, 13……
"看出规律了吗？"她问。
李少白看了半天："每个数都是前两个数的和！"
"对，这就是斐波那契数列。"赵晴儿说，"用递归来写——f(1)=1, f(2)=1, f(n)=f(n-1)+f(n-2)。不过提醒你，朴素递归效率很低，后面会学到优化的方法。"

#### 输入

一个整数n。

#### 输出

输出斐波那契数列第n项。

#### 提示

原题链接
递归：f(1)=1, f(2)=1, f(n)=f(n-1)+f(n-2)。注意效率问题。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int feibo(int n)
{
    int a=1,b=1,res=0;
    if(n==1||n==2)return 1;
    res+=feibo(n-1)+feibo(n-2);
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<feibo(n);
}
```

### 093 登阶问道

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD093/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD093 | 第7章 以招创招

#### 题面

试炼场尽头，一座石阶直通山顶。石阶共有n级，每次只能跨1级或2级。
赵晴儿站在山脚问："从第一级走到第n级，一共有多少种不同的走法？"
李少白想了想："如果我最后一步跨1级，那之前有f(n-1)种走法；如果最后一步跨2级，那之前有f(n-2)种走法……"
"没错，"赵晴儿点头，"这就是递归。"

#### 输入

一个整数n（1 ≤ n ≤ 20）。

#### 输出

输出跳法总数。

#### 提示

原题链接
f(n) = f(n-1) + f(n-2)。最后一步跳1级或2级，两种情况之和。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

int dengjie(int n)
{
    if(n==1)return 1;//n=1只有一种走法
    if(n==2)return 2;
    int res=0;//总的结果数，用于计数
    res=dengjie(n-1)+dengjie(n-2);
    return res;//返回res的值
}

int main()
{
    int n;
    cin>>n;//输入n
    cout<<dengjie(n); //输出res的值
}
```

### 094 方阵寻路

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD094/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD094 | 第7章 以招创招

#### 题面

赵晴儿在沙盘上画了一个(n+1)×(m+1)的方格阵，每个格子标着坐标。
"假设你站在左上角(0,0)，"赵晴儿指着沙盘说，"目标是走到右下角(n,m)。每次只能向右走一步，或者向下走一步。一共有多少种不同的路径？"
李少白盯着沙盘看了一会儿："走到(n,m)之前，一定是从(n-1,m)或(n,m-1)过来的……"
"很好，又是一个递归。"

#### 输入

一行，两个整数n和m（目标坐标，0 ≤ n,m ≤ 20）。

#### 输出

输出走法总数。

#### 提示

原题链接
从(0,0)到(n,m)的网格路径数。f(n,m) = f(n-1,m) + f(n,m-1)。边界：f(0,m)=1, f(n,0)=1。等价于组合数C(n+m, n)。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int dx[]={0,1},dy[]={1,0};

int n,m;
int xunlu(int i,int j)
{
    if(i==n&&j==m)return 1;
    if(i>n||j>m)return 0;
    int res=0;
    for(int k=0;k<2;k++)
    {
        i+=dx[k],j+=dy[k];
        res+=xunlu(i,j);
        i-=dx[k],j-=dy[k];
    }
    return res;
}
int main()
{

    cin>>n>>m;
    cout<<xunlu(0,0);


}
```

### 095 全排列阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD095/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD095 | 第7章 以招创招

#### 题面

梁嘉峰递给李少白n枚令牌，上面分别刻着1到n。
"把它们排成一列，列出所有可能的排列顺序。"梁嘉峰说，"按字典序从小到大输出。"
李少白开始手动枚举，很快就乱了套。赵晴儿在旁边提醒："用递归的思路——每次选一个没用过的令牌放到当前位置，然后递归处理剩下的位置。选完之后要'回退'，把令牌放回去，才能尝试下一个选择。这就是回溯。"

#### 输入

一个整数n（1 ≤ n ≤ 9）。

#### 输出

每行一个排列，数字之间用空格隔开。

#### 提示

原题链接
DFS+回溯：用used[]标记已用数字，path[]记录当前排列。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
int n;
int used[10];
bool path[10];
void dfs(int u)
{

    if(u==n){
        for(int i=0;i<n;i++)
        {
            if(i!=0)cout<<" ";
            cout<<used[i];
        }
        cout<<endl;
        return ;
    }
    else{
        for(int i=1;i<=n;i++)
        {
            if(!path[i]){
                used[u]=i;
                path[i]=true;
                dfs(u+1);
                path[i]=false;
                used[u]=0;
            }
        }
    }

}


int main()
{
    cin>>n;
    dfs(0);
}
```

### 096 空格替换

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD096/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD096 | 第8章 百器图谱

#### 题面

兵器阁的大门上刻着一行古文，但年代久远，字迹模糊，空格处尤其难以辨认。赵晴儿凑近看了看："这行字里夹了太多空格，密密麻麻的，根本看不清。"
梁嘉峰说："古卷传输时，空格容易丢失。古人想了个办法——把每个空格替换成%20，这样既保留了间隔，又不会和真正的空白混淆。"
"你写一段程序，把这行古文里的所有空格替换成%20。"

#### 输入

一行字符串（长度不超过100）。

#### 输出

替换空格为%20后的字符串。

#### 提示

原题链接
遍历字符串，遇到空格输出%20，否则输出原字符。

#### 参考代码

```cpp
#include<iostream>
using namespace std;
#include<string>

int main()
{
    string a;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            cout<<"%20";
        else cout<<a[i];
    }
}
```

### 097 再算斐波

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD097/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD097 | 第8章 百器图谱

#### 题面

赵晴儿在兵器阁的账本上翻到一串奇怪的数字：1, 1, 2, 3, 5, 8, 13, 21……
"这是前辈铸剑师留下的排列规律，"梁嘉峰说，"每一柄新剑的重量都是前两柄之和。第1柄和第2柄都是1斤，第3柄就是1+1=2斤，第4柄是1+2=3斤……"
"上一章你用递归算过这个数列，但递归太慢了。这次用容器来存——把每一项都推进一个序列里，只保留最近两项，循环推进。"
请帮赵晴儿算出第n柄剑的重量。

#### 输入

一个整数n（0 ≤ n ≤ 90）。

#### 输出

输出斐波那契数列第n项。

#### 提示

原题链接
两个变量a,b滚动：a,b = b,a+b。循环n次。

#### 参考代码

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(1);
    a.push_back(1);
    int n;
    cin>>n;
    for(int i=0,j=1;i<n;i++,j++)
    {
        a.push_back(a[i]+a[j]);
    }
    cout<<a[n-1];

}
```

### 098 倒转铁链

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD098/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD098 | 第8章 百器图谱

#### 题面

兵器阁的架子上挂着一串铁环，每个环上刻着一个数字，从头到尾依次是1、2、3……最后一个环上刻着-1，表示链条结束。
梁嘉峰指着铁链说："我要从最后一个环开始，把数字一个个报出来。但这串铁环只能从前往后读，不能直接跳到末尾。"
赵晴儿想了想："用一个容器——先把所有数字存进去，再从后往前取出来。这就像把铁环一个个摘下来放到盒子里，最后从盒子里倒着取。"

#### 输入

一行整数，以-1结尾，表示链表的节点值（-1不算节点）。

#### 输出

从尾到头输出每个节点的值，每行一个。

#### 提示

原题链接
用栈存储所有节点值，然后依次弹出。或者用递归。

#### 参考代码

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int>a;
    cin>>n;
    while(n!=-1)
    {
        a.push_back(n);
        cin>>n;
    }
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }

}
```

### 099 双栈为队

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD099/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD099 | 第8章 百器图谱

#### 题面

赵晴儿在兵器阁里找到两个铁盒，每个盒子只能从顶部放入和取出——这就是"栈"，后进先出。
梁嘉峰说："现在我需要一个'队列'——先进先出。但手边只有这两个栈，没有队列。你能用这两个栈模拟一个队列吗？"
赵晴儿思索片刻："入队的时候都放进盒子1。出队的时候，如果盒子2是空的，就把盒子1的东西全部倒进盒子2——这样顺序就反过来了，最先进来的变成了盒子2的顶部，直接取就行。"
请帮赵晴儿实现这个"双栈模拟队列"的操作。

#### 输入

若干操作命令：`push x`（入队）、`pop`（出队并输出）、`empty`（判空）。

#### 输出

对pop操作输出队首值，empty操作输出`yes`或`no`。

#### 提示

原题链接
栈1入队，栈2出队。出队时栈2空就把栈1全部倒入栈2。

#### 参考代码

```cpp
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<int>in,out;
    int n;
    string a;
    while(cin>>a)
    {
        if(a=="push")
        {
            cin>>n;
            in.push(n);
        }
        else if(a=="pop")
        {
            if(out.empty())
            {
                while(!in.empty())
                {
                    out.push(in.top());
                    in.pop();
                }
                
            }
            if(!out.empty())
            {
                cout<<out.top()<<endl;
                out.pop();
            }
        }
        else if(a=="empty")
        {
            if(out.empty()&&in.empty())
            {
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
    }
}
```

### 100 铁链翻转

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD100/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD100 | 第8章 百器图谱

#### 题面

梁嘉峰从架子上取下一条铁链，每个环上刻着一个数字。他把铁链平铺在桌上，从头到尾是1、2、3、4、5……最后一个环上刻着-1，表示结束。
"我要把这条铁链反过来，"梁嘉峰说，"第一个变最后一个，最后一个变第一个。但不能断开重接，只能用容器来辅助。"
赵晴儿拿起一个铁盒："把铁环一个个摘下来放进盒子里——先进去的沉到底部。等全部摘完，再从盒子里取出来，顺序就反了。"

#### 输入

一行整数，以-1结尾，表示链表节点值。

#### 输出

反转后的链表，空格隔开。

#### 提示

原题链接
三指针法：prev=None, curr=head。循环：next=curr.next, curr.next=prev, prev=curr, curr=next。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

struct node
{
    int m;
    node *Next;
};

int main()
{
    int n,num=0;
    node *p0,*head,*p1;
    cin>>n;
    while(n!=-1)
    {

        p0=new node;
        p0->m=n;p0->Next=NULL;
        if(num==0)
            p1=head=p0;
        else {p1->Next=p0;p1=p0;}
        num++;
        cin>>n;
    }
    node *pre,*cur,*next;
    pre=head;
    if(head->Next!=NULL){cur=next=head->Next;pre->Next=NULL;}
    else {cout<<head->m;return 0;}
    while(next->Next!=NULL)
    {
        next=next->Next;
        cur->Next=pre;
        pre=cur;
        cur=next;
    }
    next->Next=pre;
    p1=head=next;
    while(p1!=NULL)
    {
        cout<<p1->m<<" ";
        p1=p1->Next;
    }

}
```

### 101 双链归并

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD101/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD101 | 第8章 百器图谱

#### 题面

赵晴儿从兵器阁的两个抽屉里各取出一条铁链，每条链上的数字都从小到大排好了。她需要把两条链合并成一条，仍然保持从小到大的顺序。
"不能拆开重排，"梁嘉峰说，"两条链都是有序的，你要利用这个特点——从两条链的头部同时开始比较，每次取较小的那个接到结果链的末尾。"
赵晴儿拿起两个容器："用一个容器存结果。两个指针分别指向两条链的头部，谁小就取谁，直到一条链取完，再把另一条的剩余全部接上。"

#### 输入

两行，每行若干整数（以-1结尾），分别表示两个有序链表。

#### 输出

合并后的有序链表，空格隔开。

#### 提示

双指针比较合并。一个链表遍历完后，直接接上另一个的剩余部分。

#### 参考代码

```cpp
#include<iostream>
using namespace std;

struct node
{
    int num;
    node *next;
};
int main()
{
    node *head0=NULL,*head1=NULL,*head2=NULL,*p0,*p1,*p2,*p;
    int m,n;
    cin>>m;
    while(m!=-1)
    {
        p0=new node;p0->num=m;p0->next=NULL;
        if(head1==NULL)head1=p1=p0;
        else {
            p1->next=p0;
            p1=p0;
        }
        cin>>m;
    }
        cin>>n;
        while(n!=-1)
    {
        p0=new node;p0->num=n;p0->next=NULL;
        if(head2==NULL)head2=p2=p0;
        else {
            p2->next=p0;
            p2=p0;
        }
        cin>>n;
    }
    if(head1==NULL)head0=head2;
    else if(head2==NULL)head0=head1;
    else {
        p1=head1,p2=head2;
        while(p1!=NULL&&p2!=NULL)
        {
            if(p1->num>=p2->num)
            {
                p0=new node;
                p0->num=p2->num;
                p0->next=NULL;
                if(head0==NULL)
                {
                    head0=p=p0;
                }
                else {
                    p->next=p0;
                    p=p0;
                }
                p2=p2->next;
            }
            else if(p1->num<p2->num)
            {
                p0=new node;
                p0->num=p1->num;
                p0->next=NULL;
                if(head0==NULL)
                {
                    head0=p=p0;
                }   
                else {
                    p->next=p0;
                    p=p0;
                }
                p1=p1->next;
            }
        }
    
        if(p1==NULL)
            p->next=p2;
        else if(p2==NULL)
            p->next=p1;
    }
    p=head0;
    while(p!=NULL)
    {
        cout<<p->num<<" ";
        p=p->next;
    }


}
```

### 102 三元归序

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD102/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：JD | JD102 | 第8章 百器图谱

#### 题面

兵器阁的账房先生有一本厚厚的兵器账本，每条记录记着三样东西：兵器编号x、重量y（带两位小数）、兵器名称z。
"这本账太乱了，"赵晴儿翻了几页就头疼，"编号不按顺序，同编号的重量也乱排。"
梁嘉峰说："先按编号从小到大排，编号相同的再按重量从小到大排。你可以用结构体存每条记录，放进容器里，再自定义排序规则。"

#### 输入

第一行一个整数N。接下来N行，每行两个整数和一个字符串。

#### 输出

排序后的N条记录，每行一条。x输出整数，y输出保留两位小数的浮点数，字符串原样输出，空格隔开。

#### 提示

原题链接
定义结构体存储三元组，自定义比较函数：先比x，再比y。

#### 参考代码

```cpp
#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
struct sanyuan
{
    int num;
    double m;
    string str;
};

int main()
{
    int N;
    cin>>N;
    sanyuan s[200]; 
    for(int i=0;i<N;i++)
    {
        cin>>s[i].num>>s[i].m>>s[i].str;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(s[j].num>s[j+1].num||(s[j].num==s[j+1].num&&s[j].m>s[j+1].m))
            {
                sanyuan temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<s[i].num<<" "<<fixed<<setprecision(2)<<s[i].m<<" "<<s[i].str<<endl;
    }
}
```

### 103 立桩定阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD103/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 785 | JD103 | 第9章 快剑如风

#### 题面

试炼场上，弟子们按身高排成一列，但顺序完全乱了。梁嘉峰走过去，随便挑了一个弟子站到中间，然后让所有比他矮的站到左边，比他高的站到右边。
"现在左边和右边各自还是乱的，"赵晴儿看出来了。
"对。所以对左边和右边各自重复这个过程——挑一个人，矮的左、高的右。每次都能让一个人站到最终位置上，直到每一组只剩一个人。"梁嘉峰说，"这就是快速排序。一剑分两路，递归再出剑。"
给定一个长度为 n 的整数数列，请用快速排序将其从小到大排序。

#### 输入

第一行包含整数n。第二行包含n个整数。

#### 输出

一行，n个排好序的整数，空格隔开。

#### 提示

选基准元素，双指针分区：左边 ≤ 基准，右边 > 基准。递归处理左右两半。平均 O(nlogn)。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 104 照妖辨品

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD104/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 786 | JD104 | 第9章 快剑如风

#### 题面

梁嘉峰指着那排弟子："我不需要所有人都排好——只要知道第 K 矮的人是谁。"
赵晴儿想了想："还是用刚才的方法：挑一个人站中间，矮的左、高的右。数一数左边有几个人——如果左边刚好有 K-1 个人，那中间那个就是答案。如果左边人比 K-1 多，说明答案在左边，只管左边就行。如果不够，就去右边找第 K-左-1 矮的。"
"所以快排是把两边都排好，快选只需要管一边。"梁嘉峰点头，"省了一半的力气。"
给定一个长度为 n 的整数数列和一个整数 k，求数列中第 k 小的数。

#### 输入

第一行两个整数n和k。第二行n个整数。

#### 输出

一行，第k小的数。

#### 提示

partition 后判断 k 在左半还是右半，只递归一半。平均 O(n)。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 105 双剑合阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD105/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 787 | JD105 | 第9章 快剑如风

#### 题面

赵晴儿把弟子们两两分成一组，每组内部先按身高排好。然后两组合成一组四人——从两组的排头各看一眼，矮的先出列，依次接上。四人组再两两合并成八人组……
梁嘉峰看明白了："快排是先挑基准把人分开，归并是先把人拆到最小单位，再一层层合并上来。"
"对，"赵晴儿说，"合并时两边都是有序的，所以每次只需要比较排头，O(n)就能合并。拆到底再合上来，总共 O(nlogn)。而且最坏情况也一样——不像快排最坏会退化。"
给定一个长度为 n 的整数数列，请用归并排序将其从小到大排序。

#### 输入

第一行包含整数n。第二行包含n个整数。

#### 输出

一行，n个排好序的整数，空格隔开。

#### 提示

递归拆分 → 合并两个有序数组。需要额外空间 O(n)。稳定排序。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 106 逆流之数

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD106/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 788 | JD106 | 第9章 快剑如风

#### 题面

弟子们排成一列，每人身上有一个编号。赵晴儿发现，有些排在前面的人编号反而比后面的大——这就是"逆序对"，说明队伍很乱。
"逆序对越多，队伍越乱。"赵晴儿说，"但要一个个比太慢了。有没有 O(nlogn) 的方法？"
李少白盯着归并排序看了一会儿，突然开窍："归并的时候，左右两队都是从小到大排好的。从两队的排头开始比较——如果右边的先出列，说明右边这个人比左边队里剩下的所有人都小，那些都是逆序对！"
"没错。"赵晴儿笑了，"排完序，逆序对也数完了。"
给定一个长度为 n 的整数数列，求逆序对的数量。

#### 输入

第一行包含整数n。第二行包含n个整数（1≤n≤100000）。

#### 输出

一行，逆序对的数量。

#### 提示

归并排序过程中，当右边元素先被选中时，左边剩余元素个数就是新增的逆序对数。用 long long 存结果。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 107 石壁听风

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD107/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 789 | JD107 | 第9章 快剑如风

#### 题面

赵晴儿递给李少白一排刻着数字的石块，从左到右从小到大排好了。她问："数字 3 第一次出现在哪块石块上？最后一次出现在哪？"
李少白想从头数，但石块有十万块。赵晴儿拦住他："石块是有序的，不用一个个看。先看最中间那块——如果中间的数比 3 大，说明 3 只可能在左半边，右半边不用看了。每次都把范围砍一半，这就是二分。"
"找第一次出现的位置和最后一次出现的位置，各二分一次。"李少白接话道。
"对。如果整个范围里都找不到，就说明没有。"
给定一个升序排列的长度为 n 的整数数组和 q 个查询，对每个查询返回目标值的起始位置和终止位置（从0开始），不存在则返回 -1 -1。

#### 输入

第一行两个整数n和q。第二行n个整数（升序）。第三行q个待查询的整数。

#### 输出

每行两个整数，起始位置和终止位置。不存在输出-1 -1。

#### 提示

两次二分：找第一个 ≥ x 的位置（左边界），找最后一个 ≤ x 的位置（右边界）。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 108 剑指方根

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD108/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 790 | JD108 | 第9章 快剑如风

#### 题面

赵晴儿在沙盘上写下一个数 n："求它的三次方根。"
李少白试了几个整数，立方后不是太大就是太小。赵晴儿说："别猜了。三次方根一定在 -10000 到 10000 之间。你取中间值试试——如果中间值的立方比 n 大，说明真正的答案在左半边；比 n 小，就在右半边。范围不断缩小，直到精度足够。"
"和整数二分一样的思路，"李少白说，"只不过这次找的不是一个确切的位置，而是一个足够精确的浮点数。"
"对。整数二分停在某个整数上，浮点二分停在精度达标时。"
给定一个浮点数 n，求它的三次方根。

#### 输入

一个浮点数n（-10000≤n≤10000）。

#### 输出

n的三次方根，保留6位小数。

#### 提示

浮点二分：left=-10000, right=10000，while(right-left>1e-8)，mid=(left+right)/2。若 mid³≥n，right=mid；否则 left=mid。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 109 铁壁识痕

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD109/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 801 | JD109 | 第10章 千锤百炼

#### 题面

精铸阁的墙壁上嵌着一排铁板，每块铁板上用二进制刻着一个数——有凹痕的地方是1，平整的地方是0。
赵晴儿递给李少白一串数字："每块铁板上有几道凹痕？数出来。"
李少白想逐位检查。赵晴儿教他一个窍门："用位运算——n & 1 看最低位是不是1，然后 n >>= 1 右移一位，继续看下一位。数完所有位，就知道有几道凹痕了。"
给定 n 个整数，输出每个数的二进制表示中有多少个1。

#### 输入

第一行一个整数n。第二行n个整数（1≤n≤100000）。

#### 输出

一行，每个数对应的1的个数，空格隔开。

#### 提示

位运算：while(n > 0) { count += n & 1; n >>= 1; }。或用 n & (n-1) 消去最低位的1，计数更快。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 110 万钧合一

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD110/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 791 | JD110 | 第10章 千锤百炼

#### 题面

精铸阁中，赵晴儿递来两块铁牌，上面各刻着一个巨大的数字——长到普通变量根本装不下。
"这两个数要加起来，"赵晴儿说，"但没有那么大的容器。怎么办？"
李少白想了想："像竖式加法一样，把每一位拆开，用数组存。从最低位开始逐位相加，满十进一。"
"对。这就是高精度加法——用数组模拟竖式。"
给定两个正整数，计算它们的和。每个数不超过 100000 位。

#### 输入

两行，每行一个正整数（不超过100000位）。

#### 输出

一行，两数之和。

#### 提示

用数组存每一位（倒序），从低位到高位逐位相加，处理进位。最后倒序输出。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 111 削铁如泥

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD111/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 792 | JD111 | 第10章 千锤百炼

#### 题面

梁嘉峰递给李少白两块铁牌："这次是减法。大数减大数，注意借位。"
李少白接过一看，两个数都很长。他先比较了大小——如果被减数比减数小，结果就是负数，先交换再算。
"像竖式减法一样，从最低位开始，不够减就向高位借1。"梁嘉峰说，"削铁如泥，一刃一刃来。"
给定两个正整数，计算它们的差（结果可能为负数）。每个数不超过 100000 位。

#### 输入

两行，每行一个正整数（不超过100000位）。

#### 输出

一行，两数之差。

#### 提示

先判断大小，大减小，从低位逐位减，处理借位。如果被减数小则结果加负号。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 112 叠甲千层

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD112/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 793 | JD112 | 第10章 千锤百炼

#### 题面

赵晴儿递来一块刻着万位数的铁牌和一个小铁块："大数乘以小数。铁牌上的每一位都要乘以小铁块的数，再处理进位——就像叠甲，一层压一层。"
李少白从铁牌的最低位开始，逐位乘以小数，加上前一位的进位，本位留下余数，进位带到下一位。
给定一个大正整数 A 和一个小正整数 B，计算 A × B。A 不超过 100000 位，B 不超过 10000。

#### 输入

两行，第一行正整数A（不超过100000位），第二行正整数B（不超过10000）。

#### 输出

一行，A×B的结果。

#### 提示

高精度×低精度：大数每一位乘以小数，处理进位。注意结果可能有前导零需要去掉。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 113 分金断玉

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD113/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 794 | JD113 | 第10章 千锤百炼

#### 题面

梁嘉峰拿起一把锉刀："大数除以小数——分金断玉，从高位一刀一刀切。"
"从最高位开始，"赵晴儿解释，"当前余数乘10加上当前位，除以除数得到商的一位，剩下的余数带到下一位。和竖式除法一模一样。"
给定一个大非负整数 A 和一个小正整数 B，计算 A ÷ B 的商和余数。A 不超过 100000 位，B 不超过 10000。

#### 输入

两行，第一行非负整数A（不超过100000位），第二行正整数B（B≠0）。

#### 输出

两行，第一行商，第二行余数。

#### 提示

高精度÷低精度：从高位到低位，当前余数×10+当前位，除以B得商的一位，更新余数。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 114 双剑求和

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD114/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 800 | JD114

#### 题面

赵晴儿递给李少白两排有序的铁牌，每排上的数字从小到大排列。她说："从两排铁牌中各取一块，使它们的数字之和刚好等于一个目标值。"
李少白想暴力枚举，但每排都有十万块。赵晴儿说："两排都是有序的——第一个指针从第一排的头部开始，第二个指针从第二排的尾部开始。如果和太大，第二个指针往左移；和太小，第一个指针往右移。两个指针配合，一次遍历就够了。"
给定两个升序数组 A 和 B，以及目标值 x，找出满足 A[i] + B[j] = x 的数对 (i, j)。保证有唯一解。

#### 输入

第一行两个整数n和m。第二行n个整数。第三行m个整数。

#### 输出

一行，两个整数i和j。

#### 提示

双指针：i 从 A 的头，j 从 B 的尾。A[i]+B[j] < x 则 i++，> x 则 j--。O(n+m)。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 115 双剑验序

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD115/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 2816 | JD115

#### 题面

赵晴儿拿着两卷竹简，上面各写着一串数字。她问："第二卷的内容是不是第一卷的子序列？子序列不要求连续，但必须保持原有次序。"
李少白用两个指针："一个指针遍历第一卷，另一个指向第二卷。如果当前字符匹配，第二卷的指针就往前走。最后看第二卷的指针有没有走到头——走到头就说明全部匹配上了。"
"对，两个指针各走一遍，O(n)。"
给定序列 a（长度 n）和序列 b（长度 m），判断 a 是否为 b 的子序列。

#### 输入

第一行两个整数n和m。第二行n个整数（序列a）。第三行m个整数（序列b）。

#### 输出

是子序列输出Yes，否则输出No。

#### 提示

双指针：i 遍历 a，j 遍历 b。a[i] == b[j] 时 i++。i 到头说明是子序列。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 116 无重之最

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD116/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 799 | JD116

#### 题面

梁嘉峰在沙盘上摆了一排石块，每块上刻着一个数字。他问："从这排石块中，找出最长的一段——这段里每个数字都不重复。"
李少白想从头遍历每一段，但石块有十万块。赵晴儿教他："用两个指针，一左一右，框住一段区间。右指针往右扩展，遇到重复数字就收缩左指针，直到区间内没有重复。每一步都更新最大长度。"
"两个指针各走各的，总共只走一遍——O(n)。"
给定一个长度为 n 的整数序列，找出最长的不含重复数字的连续子序列，输出其长度。

#### 输入

第一行一个整数n。第二行n个整数（1≤n≤100000）。

#### 输出

一行，最长连续不重复子序列的长度。

#### 提示

滑动窗口：右指针扩展，用哈希表判断是否重复，重复则左指针收缩。O(n)。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 117 独剑无双

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD117/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 90

#### 题面

藏剑阁深处，梁嘉峰领着李少白走进一间密室。墙上挂满了剑，每把剑柄上都刻着一个数字。
"这些剑，成双成对，唯有一把是独一无二的。"梁嘉峰说，"你能在 O(1) 额外空间内找出它吗？"
李少白想用哈希表记录每把剑出现的次数。赵晴儿摇头："空间不够。想想异或的性质——a ^ a = 0，a ^ 0 = a。成对的剑异或后消失，留下的就是独剑。"
给定 n 个整数，其中只有一个数出现了一次，其余数都恰好出现了两次。找出那个只出现一次的数。要求时间复杂度 O(n)，空间复杂度 O(1)。

#### 输入

第一行一个整数 n（n 为奇数，1 ≤ n ≤ 100000）。第二行 n 个整数，每个数在 int 范围内。

#### 输出

一行，只出现一次的那个数。

#### 提示

原题链接
异或性质：a^a=0, a^0=a。所有数异或，成对消失，独者现身。O(n) 时间，O(1) 空间。

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 118 剑招收放

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD118/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 92

#### 题面

剑道宗大殿前，十八般兵器陈列两旁。梁嘉峰指着 n 把剑说："每一把，你可以选择施展（选）或收起（不选）。列出所有可能的剑招组合。"
李少白问："n 把剑有 2^n 种组合，怎么枚举？"赵晴儿递来一张纸："递归。对于每把剑，先试'选'，再试'不选'。走到尽头就输出当前组合。"
给定 n，按字典序输出 1~n 的所有非空子集。每个子集内数字升序排列。

#### 输入

一行一个整数 n（1 ≤ n ≤ 16）。

#### 输出

每行一个子集，子集内数字升序排列，子集之间按字典序排列。空集不输出。

#### 提示

原题链接
递归枚举：对每个位置选或不选，到达边界输出。2^n 种组合。

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 119 剑阵组合

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD119/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 93

#### 题面

练武场上，梁嘉峰递给李少白 n 把剑，说："从中选出 k 把，列出所有选法。"
李少白问："这和子集枚举有什么区别？"赵晴儿说："子集枚举是选任意数量，组合枚举是恰好选 k 个。多了一个约束——必须选满 k 个才能输出。但递归框架类似，只是多了一个剪枝。"
给定 n 和 k，按字典序输出从 1~n 中选 k 个数的所有组合。每个组合内数字升序排列。

#### 输入

一行两个整数 n 和 k（1 ≤ k ≤ n ≤ 16）。

#### 输出

每行 k 个数（升序），组合之间按字典序排列。

#### 提示

原题链接
递归枚举，每次从上一个数+1开始。剪枝：剩余数字不够则提前返回。C(n,k) 种组合。

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 120 江湖真假

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD120/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 240

#### 题面

江湖之中，n 位高手各立门派。有人传言："甲和乙是同门师兄弟。"又有人说："丙能打败丁。"
梁嘉峰说："江湖中，同类不吃同类。但吃的关系是传递的——甲吃乙、乙吃丙，则甲也吃丙。"
赵晴儿教他："用带权并查集。每个节点到根的距离 mod 3 表示关系：距离 0 是同类，距离 1 能吃根，距离 2 被根吃。"
给定 n 个人和 m 条关系声明，判断有多少条是假的（与前面的真话矛盾）。

#### 输入

第一行两个整数 n 和 m（1 ≤ n ≤ 50000, 1 ≤ m ≤ 100000）。接下来 m 行，每行三个整数 d x y。d=1 表示同类，d=2 表示 x 吃 y。

#### 输出

一行，假话的数量。

#### 提示

原题链接
带权并查集。节点到根距离 mod 3：0=同类，1=吃根，2=被根吃。路径压缩时更新距离。

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 121 蓄势之术

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD121/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 795 | JD121

#### 题面

蓄势阁中，赵晴儿盘膝而坐，面前摆着一排石块，每块上刻着一个数字。
"如果我问你第3块到第7块的总和，你怎么算？"赵晴儿问。
李少白："从第3块加到第7块，五次加法。"
"如果问一千次呢？"赵晴儿摇头，"每次从头算太浪费了。提前算好从第1块到每一块的累积和——第1块到第7块的和减去第1块到第2块的和，就是第3块到第7块的和。一次减法就够了。"
"这就是前缀和——蓄势于前，取用于后。"
给定一个长度为 n 的整数序列和 m 个查询，每个查询求 [l, r] 的区间和。

#### 输入

第一行两个整数n和m。接下来n行每行两个整数x和c。接下来m行每行两个整数l和r。

#### 输出

m行，每行一个整数。

#### 提示

前缀和：s[i] = a[1] + ... + a[i]。区间和 = s[r] - s[l-1]。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 122 方阵蓄势

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD122/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 796 | JD122

#### 题面

赵晴儿在沙盘上画了一个 n 行 m 列的数字矩阵。"如果我问你左上角 (x1,y1) 到右下角 (x2,y2) 这个子矩阵里所有数的和，你怎么算？"
李少白想逐行累加。赵晴儿摇头："太慢了。和一维前缀和一样的思路——提前算好从 (1,1) 到每个位置的累积和。查询时用容斥原理：大矩形减去左边和上边的多余部分，加上左上角多减的部分。"
"蓄势蓄到二维，一击覆盖任意子矩阵。"
给定一个 n×m 的整数矩阵和 q 个查询，每个查询求子矩阵的和。

#### 输入

第一行一个整数n（1≤n≤100000）。接下来n行每行两个整数l和r。

#### 输出

q行，每行一个整数，表示每次查询的子矩阵和。

#### 提示

二维前缀和+容斥。子矩阵和 = s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1]。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 123 差分之术

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD123/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 797 | JD123

#### 题面

赵晴儿指着一排石块："我要把第3块到第7块每块都加上5。如果一块块改，太慢了。"
梁嘉峰说："差分——前缀和的逆运算。你在第3块的位置加5，在第8块的位置减5。最后对整排求一次前缀和，第3到第7块就都加了5，其余不变。"
"就像往水面扔两块石头，"李少白恍然大悟，"波纹叠加后就是最终结果。"
给定一个长度为 n 的整数序列和 m 个操作，每个操作将 [l, r] 的每个数加 c。输出所有操作后的序列。

#### 输入

第一行两个整数n和m。第二行n个整数。接下来m行每行两个整数l和r。

#### 输出

一行，n个整数，空格隔开，表示经过m次操作后的最终序列。

#### 提示

差分：b[l] += c, b[r+1] -= c。所有操作完成后，对 b 求前缀和得到最终序列。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 124 方阵差分

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD124/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 798 | JD124

#### 题面

赵晴儿在沙盘上画了一个 n 行 m 列的矩阵："我要把左上角 (x1,y1) 到右下角 (x2,y2) 这个子矩阵里每个数都加上 c。"
梁嘉峰说："和一维差分一样的思路——在差分矩阵的四个角加减，最后对整个矩阵求一次二维前缀和，就还原出最终结果了。"
"蓄势蓄到二维，差分也能覆盖任意子矩阵。"
给定一个 n×m 的整数矩阵和 q 个操作，每个操作将子矩阵的每个元素加 c。输出所有操作后的矩阵。

#### 输入

第一行三个整数n、m和q。接下来n行每行m个整数。接下来q行每行四个整数x1、y1、x2、y2。

#### 输出

q行，每行一个整数。

#### 提示

二维差分：在四个角加减，最后求二维前缀和。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 125 离散聚力

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD125/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 802 | JD125

#### 题面

赵晴儿指着一条无限长的数轴："坐标从负无穷到正无穷，但真正有值的位置只有几个。如果开一个那么大的数组，太浪费了。"
"所以要把这些稀疏的大坐标映射到连续的小下标上——这就是离散化。"梁嘉峰接话，"映射之后再用前缀和，就能 O(1) 回答区间求和的查询。"
"先聚力于有用之处，再一击命中。"
假定有一个无限长的数轴，初始每个坐标上都是0。先进行 n 次操作，每次将位置 x 上的数加 c。然后进行 m 次查询，每次求区间 [l, r] 的和。

#### 输入

第一行两个整数n和m。第二行n个整数。接下来m行每行三个整数l、r和c。

#### 输出

m行，每行一个整数，表示每次查询的结果。

#### 提示

离散化：排序去重后映射到连续下标。用前缀和回答区间查询。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 126 合围归阵

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD126/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 803 | JD126

#### 题面

梁嘉峰在地上画了一堆区间，有些重叠，有些相邻。"把这些区间合并——有交集的归为一组，最后数一数有几组。"
赵晴儿蹲下来看了一会儿："先按左端点从小到大排。然后从左往右扫——如果当前区间的左端点在前一个区间内，说明它们重叠，合并；否则新开一组。"
"合围之势，聚散有序。"
给定 n 个区间，合并所有有交集的区间（端点相交也算），输出合并后的区间个数。

#### 输入

第一行包含整数n，表示区间个数。
接下来n行，每行包含两个整数l和r，表示一个区间的左右端点。

#### 输出

一个整数，表示合并后的区间个数。

#### 提示

按左端点排序，遍历合并：当前区间左端点 ≤ 前一个右端点则合并，否则新开。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 127 一箭穿心

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD127/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 905 | JD127

#### 题面

赵晴儿在数轴上标了 N 个区间，每个区间表示一个敌人的巡逻范围。"用最少的暗器，让每个敌人的巡逻范围里至少中一枚。"
李少白想每个区间放一枚。赵晴儿摇头："贪心——按右端点从小到大排。第一枚暗器射在第一个区间的右端点，这样所有包含这个点的区间都中了。然后跳过这些区间，再射下一批。"
"选右端点是因为它最'靠左'——能覆盖尽可能多的后续区间。"
给定 N 个闭区间，选择尽量少的点，使得每个区间内至少有一个点。

#### 输入

第一行一个整数N（1≤N≤100000）。接下来N行每行两个整数a和b。

#### 输出

一行，最少需要的点数。

#### 提示

按右端点排序，每次选当前区间的右端点，跳过所有包含该点的区间。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 128 合果成堆

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD128/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 148 | JD128

#### 题面

果园里有 N 堆果子，每堆重量不同。赵晴儿要把它们合并成一堆，每次只能合并两堆，消耗的能量等于两堆重量之和。
"如果先合并重的，后面每次合并都要带着这堆重的走，代价越来越大。"赵晴儿说，"所以反过来——每次选最轻的两堆合并，这样每一步的代价都最小。"
李少白想到用小根堆："每次取出堆顶（最轻的两堆），合并后放回去。总代价最小。"
这就是哈夫曼树的思想。
有 N 堆果子，每次合并两堆（代价为两堆之和），求合并为一堆的最小总代价。

#### 输入

第一行一个整数N（1≤N≤10000）。第二行N个整数，表示每堆的重量。

#### 输出

一行，最小总代价。

#### 提示

小根堆：每次取最小的两个合并，结果放回堆中。O(nlogn)。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 129 中位之选

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD129/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 104 | JD129

#### 题面

数轴上有 N 个商铺，赵晴儿要建一个货仓，让所有商铺到货仓的货物运输距离之和最小。
"选在哪里？"李少白问。
"排序后取中位数。"赵晴儿说，"数学可以证明：中位数使绝对偏差之和最小。如果选在中位数左边，右边的商铺距离全部变远；选在中位数右边，左边的商铺距离全部变远。只有中位数是平衡点。"
给定 N 个点的坐标，求一个位置使所有点到该位置的绝对距离之和最小，输出最小距离之和。

#### 输入

第一行一个整数N（1≤N≤100000）。第二行N个整数，表示各点坐标。

#### 输出

一行，最小距离之和。

#### 提示

排序后取中位数（下标 n/2），计算所有点到中位数的距离之和。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 130 铁链串珠

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD130/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 826 | JD130

#### 题面

兵器阁的深处，梁嘉峰指着一条铁链："这条链上每颗珠子存着一个值，每颗珠子还指着下一颗——这就是链表。"
"用数组模拟链表：head指向第一颗珠子，val[]存每颗珠子的值，ne[]存下一颗珠子的下标。插入、删除都只需要改指针，O(1)。"
赵晴儿说："链表的好处是插入删除快，代价是不能随机访问。"
实现一个单链表，支持在头部插入、在第k个插入的元素后面插入、删除第k个插入的元素前面的元素。

#### 输入

若干行操作命令：H x（头部插入x）、I k x（在第k个插入的元素后插入x）、D k（删除第k个插入的元素前面的元素）。

#### 输出

输出最终链表，从头到尾空格隔开。

#### 提示

数组模拟链表：head, val[], ne[]。插入：新节点的ne指向原next，前驱的ne指向新节点。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 131 叠石成塔

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD131/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 828 | JD131

#### 题面

梁嘉峰在墙角堆了一摞石块："栈——后进先出。只能从顶部放石块，也只能从顶部取。"
赵晴儿指着石块："push是放石块到顶部，pop是取走顶部的石块，query是看看顶部那块刻着什么数。"
"生活中到处是栈——叠盘子、摞书、函数调用。"
实现一个栈，支持push、pop、query操作。

#### 输入

若干行操作命令：push x（入栈）、pop（出栈）、query（查询栈顶）。

#### 输出

对每个query和pop操作输出一行结果。

#### 提示

数组模拟栈：tt指向栈顶。push: st[++tt]=x。pop: tt--。query: st[tt]。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 132 列阵待命

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD132/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 829 | JD132

#### 题面

赵晴儿指着一排队列："队列——先进先出。新来的站队尾，走的从队头走。"
梁嘉峰说："push是从队尾加入，pop是从队头弹出，query是看队头是谁。"
"排队买饭、消息队列、BFS——都是队列。"
实现一个队列，支持push、pop、query操作。

#### 输入

若干行操作命令：push x（入队）、pop（出队）、query（查询队头）。

#### 输出

对每个query和pop操作输出一行结果。

#### 提示

数组模拟队列：hh队头，tt队尾。push: q[++tt]=x。pop: hh++。query: q[hh]。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 133 算筹求值

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD133/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 3302 | JD133

#### 题面

赵晴儿递来一个算式："3 + 4 * 2 - ( 1 + 5 )。算出结果。"
梁嘉峰拿出两个盒子："数字盒和符号盒。遇到数字放数字盒。遇到符号——如果比栈顶符号优先级低，就把栈顶符号和两个数字算掉。遇到左括号直接放，遇到右括号一直算到左括号。"
"用两个栈——数字栈和运算符栈，按优先级处理。"
给定一个包含 +、-、*、/、(、) 的表达式，求值。

#### 输入

一行包含+、-、*、/、(、)和整数的表达式。

#### 输出

一行，表达式的值。

#### 提示

双栈法：数字栈+运算符栈。比较优先级决定是否先算栈顶。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 134 一山更比

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD134/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 830 | JD134

#### 题面

梁嘉峰指着一排山峰："每座山往左看，找到第一座比自己高的山。"
赵晴儿说："用一个栈维护'还没找到更高山'的山峰——从左往右扫，遇到更高的山，栈里比它矮的全部弹出，它们的答案就是这座山。"
"栈里永远是单调递减的——所以叫单调栈。"
给定一个整数序列，对每个元素找到它左边第一个比它大的数。

#### 输入

第一行一个整数n。第二行n个整数。

#### 输出

一行，每个元素左边第一个比它大的数，不存在输出-1。

#### 提示

单调栈：遍历时弹出比当前小的元素，栈顶就是答案。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 135 窗移镜照

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD135/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 154 | JD135

#### 题面

赵晴儿在沙盘上画了一排数字，用一个框框住其中k个："这个框每往右移一格，告诉我框里的最小值。"
梁嘉峰说："用单调队列——维护一个单调递增的队列。窗口移动时，队头如果过期就弹出；新元素入队时，把队尾比它大的全部弹出。队头永远是当前窗口的最小值。"
"一扇窗户移过整排数字，镜中始终映出最小值。"
给定一个长度为 n 的整数序列和窗口大小 k，求每个窗口内的最小值。

#### 输入

第一行两个整数n和k（窗口大小）。第二行n个整数。

#### 输出

每个窗口的最小值，空格隔开。

#### 提示

单调队列：维护递增队列。窗口滑动时弹出过期元素和比新元素大的元素。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 136 剑谱寻踪

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD136/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 831 | JD136

#### 题面

赵晴儿拿着一本剑谱："在这本厚厚的剑谱里找一段特定的剑招序列——模式串在文本串中出现了几次？分别在哪里？"
李少白想一个个比对，但剑谱有十万字。梁嘉峰说："KMP算法——先预处理模式串，算出每个位置的next数组（最长相等前后缀）。匹配时利用next跳转，不用回退文本指针。O(n+m)。"
在文本串中查找模式串的所有出现位置。

#### 输入

第一行一个整数n（模式串长度）。第二行模式串。第三行一个整数m（文本串长度）。第四行文本串。

#### 输出

一行，模式串在文本串中所有出现的起始位置（从0开始），空格隔开。

#### 提示

KMP：预处理next数组（最长相等前后缀），匹配时利用next跳转。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 137 堆石成丘

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD137/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 839 | JD137

#### 题面

梁嘉峰在地上堆了一座小丘："堆——一种特殊的完全二叉树。父节点的值永远比子节点小（小根堆）。"
赵晴儿说："用数组存——父节点i的子节点是2i和2i+1。插入时上浮，删除时下沉。支持插入、取最小值、删除任意元素。"
实现一个小根堆，支持插入、删除第k个插入的元素、查询最小值。

#### 输入

若干行操作命令：I x（插入x）、PM（查询最小值）、D k（删除第k个插入的元素）。

#### 输出

对每个PM操作输出一行最小值。

#### 提示

数组模拟堆：上浮和下沉操作。父节点i的子节点是2i和2i+1。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 138 合帮并派

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD138/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 836 | JD138

#### 题面

江湖上有N个门派，每个弟子属于一个门派。赵晴儿问："两个弟子是不是同门？"梁嘉峰说："用并查集——合并两个门派用union，查询两个人是否同门用find。路径压缩后几乎O(1)。"
给定N个元素和M个操作：合并两个集合，或查询两个元素是否在同一集合。

#### 输入

第一行两个整数N和M。接下来M行，每行M 1 a b（合并a和b所在集合）或Q a b（查询a和b是否同属一个集合）。

#### 输出

对每个Q操作输出一行Yes或No。

#### 提示

并查集：find时路径压缩，union时合并两棵树。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 139 门派计数

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD139/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 837 | JD139

#### 题面

赵晴儿在并查集的基础上问："每个门派有多少人？"
梁嘉峰说："在合并时，把一个门派的人数加到另一个上。查询时直接读人数。"
给定N个元素和M个操作：合并两个集合，或查询某个元素所在集合的大小。

#### 输入

第一行两个整数N和M。接下来M行，每行M a b（合并）或C a（查询a所在集合大小）。

#### 输出

对每个C操作输出一行集合大小。

#### 提示

维护size[]数组，合并时更新size。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_

### 140 三界相克

- 题目来源：http://www.xmuoj.com/contest/359/problem/JD140/
- 时间限制：1000 ms
- 内存限制：256 MB
- 来源：AcWing 240 | JD140

#### 题面

梁嘉峰说："A吃B，B吃C，C吃A——三种动物形成环形食物链。给你N个动物和K句话，判断哪些话是假的。"
赵晴儿解释："扩展并查集——每个动物拆成三个节点，分别表示'A是A'、'A是B的食物'、'A是C的食物'。用模3的关系判断真假。"
给定N个动物和K句话，判断假话数量。

#### 输入

第一行两个整数N和K。接下来K行，每行两个整数x y z（x=1表示y和z同类，x=2表示y吃z）。

#### 输出

一行，假话的数量。

#### 提示

扩展并查集：每个点拆成3个，模3判断关系。
原题链接

#### 参考代码

_还没有参考代码,欢迎投稿!_
