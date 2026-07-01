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