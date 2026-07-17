// 思路：分别套用三角形、圆、梯形、正方形和矩形的面积公式完成计算。
#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", (a * c) / 2.0); // 三角形面积使用底乘高再除以二。
    printf("CIRCULO: %.3lf\n", 3.14159 * c * c);
    printf("TRAPEZIO: %.3lf\n", (a + b) * c / 2.0);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);
    return 0;
}
// 总结：几何公式题需要对应好各变量含义，并统一保留三位小数。
