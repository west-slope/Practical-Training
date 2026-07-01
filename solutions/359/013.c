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