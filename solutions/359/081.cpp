// 思路：使用递归关系 n! 等于 n 乘以 (n-1)! 计算阶乘。
#include<iostream>
using namespace std;

int jiecheng(int n)
{
    int res=1;
    if(n==1)return 1;
    else res*=n*jiecheng(n-1); // 当前 n 与前一阶阶乘相乘形成递归结果。
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<jiecheng(n);
}
// 总结：递归函数必须设置明确的终止条件，避免无限调用。