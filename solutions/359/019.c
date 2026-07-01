#include <stdio.h>
int main()
{
    int name, num;
    double price[] = { 4.00,4.50,5.00,2.00,1.50 };
    scanf("%d%d", &name, &num);
    printf("Total: R$ %.2lf", price[name - 1] * num);
    return 0;
}