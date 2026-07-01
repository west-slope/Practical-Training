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
