#include <stdio.h>
int main()
{
    int p, e, i, d;
    int m = 1;
    scanf("%d%d%d%d", &p, &e, &i, &d);
    while (p != -1 && e != -1 && i != -1 && d != -1)
    {
        
        for (int j = d+1; j <= d+21252; j++)
        {
            if ((j - p) % 23 == 0 && (j - e) % 28 == 0 && (j - i) % 33 == 0)
            {
                if (d!=365||j!=21252)
                    printf("Case %d: the next triple peak occurs in %d days.\n", m, j - d);
                else printf("Case %d: the next triple peak occurs in %d days.\n", m, 21252);
                break;
            }
        }
        m++;
        scanf("%d%d%d%d", &p, &e, &i, &d);
    }
    return 0;
}