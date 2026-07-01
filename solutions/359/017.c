#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (B > A)printf("%d", B - A);
    else if (A == B)printf("%d", 24);
    else if (A > B)printf("%d", 24 - A + B);
    return 0;
}