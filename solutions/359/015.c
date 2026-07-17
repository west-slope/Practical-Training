// 思路：分别检查两个整数能否整除对方，从而判断它们是否存在倍数关系。
#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (A % B == 0 || B % A == 0)printf("Yes"); // 任意一个取模结果为零即可说明两数互为倍数。
    else printf("No");
    return 0;
}
// 总结：倍数关系具有方向性，因此需要同时检查 A%B 和 B%A。