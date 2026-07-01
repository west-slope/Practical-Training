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