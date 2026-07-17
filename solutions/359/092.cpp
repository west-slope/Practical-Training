// 思路：按斐波那契递推定义递归求解第 n 项，并把前两项设为一。
#include<iostream>
using namespace std;

int feibo(int n)
{
    int a=1,b=1,res=0;
    if(n==1||n==2)return 1;
    res+=feibo(n-1)+feibo(n-2); // 第 n 项由前两项递归结果相加得到。
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<feibo(n);
}
// 总结：朴素递归表达直观但会重复计算，只适合较小的 n。