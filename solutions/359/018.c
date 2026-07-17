// 思路：通过三次两两比较交换，把三个整数整理为降序后再反向输出。
#include <stdio.h>
int main()
{
    int a, b, c,temp = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b) // 当前面的数更小时交换，使较大的数逐步移动到前面。
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d",c,b,a);
    return 0;
}
// 总结：少量数据可以直接比较交换，但输出顺序要与内部排序方向对应。