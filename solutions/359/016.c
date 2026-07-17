// 思路：先用三角形不等式判断三边能否成三角形，否则按梯形公式计算面积。
#include <stdio.h>
#include <math.h>
int main()
{
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    if (A + B > C && B + C > A && A + C > B)printf("Perimeter = %.1lf", A + B + C); // 三组两边之和都大于第三边时输出三角形周长。
    else printf("Area = %.1lf", (A + B) * C / 2);
    return 0;
}
// 总结：判断三角形必须同时满足三条不等式，不能只比较其中一组边。