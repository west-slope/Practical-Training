// 思路：根据开始和结束时刻的先后关系计算经过小时数，并处理跨越午夜的情况。
#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (B > A)printf("%d", B - A);
    else if (A == B)printf("%d", 24); // 起止时刻相同时表示经过完整的二十四小时。
    else if (A > B)printf("%d", 24 - A + B);
    return 0;
}
// 总结：周期时间差需要区分同日、跨日以及整周期三种情况。