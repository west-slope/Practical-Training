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