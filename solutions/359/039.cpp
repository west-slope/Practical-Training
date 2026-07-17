// 思路：枚举一到 N 的所有整数，用整除条件筛选 N 的约数。
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0) // 余数为零说明当前 i 可以整除 N。
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
// 总结：直接枚举约数实现简单，关键是包含一和 N 两个边界。
