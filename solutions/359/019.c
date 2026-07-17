// 思路：用价格数组保存五种商品单价，再通过商品编号找到对应价格。
#include <stdio.h>
int main()
{
    int name, num;
    double price[] = { 4.00,4.50,5.00,2.00,1.50 };
    scanf("%d%d", &name, &num);
    printf("Total: R$ %.2lf", price[name - 1] * num); // 商品编号从一开始，因此访问数组时需要减一。
    return 0;
}
// 总结：编号映射固定数据时使用数组比多分支判断更简洁。