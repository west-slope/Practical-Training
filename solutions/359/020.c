// 思路：按从小到大的顺序判断数值所在区间，并准确处理每个端点的开闭。
#include <stdio.h>
int main()
{
    float power; 
    scanf("%f", &power);
    if (power >= 0 && power <= 25)  // 第一个区间同时包含零和二十五两个端点。
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
// 总结：连续区间判断最容易出错的是边界，需逐个确认大于或大于等于。