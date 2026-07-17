// 思路：从二开始每次增加二，直接枚举一百以内的所有正偶数。
#include<iostream>
using namespace std;
int main()
{
    for(int i=2;i<=100;i+=2) // 步长设为二可以避免循环中再次判断奇偶性。
    {
        cout<<i<<endl;
    }
    return 0;
}
// 总结：等差序列输出时选好起点和步长能让代码更简洁。