// 思路：根据横纵坐标的正负判断象限，再单独处理坐标轴和原点。
#include <stdio.h>
int main()
{
    double x,y;
    scanf("%lf%lf", &x,&y);
    if (x > 0 && y > 0) // 横纵坐标都为正时点位于第一象限。
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
// 总结：坐标分类除了四个象限，还要覆盖两条坐标轴和原点。