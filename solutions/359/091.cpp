// 思路：利用 n! = n×(n-1)! 的递归定义计算输入整数的阶乘。
#include<iostream>
using namespace std;

int jiecheng(int n)
{
    int res=1;
    if(n==1)return 1;
    else res*=n*jiecheng(n-1); // 递归调用先求较小阶乘，再乘以当前 n。
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<jiecheng(n);
}
// 总结：阶乘递归的边界是 n 等于一，输入范围还需避免整数溢出。