// 思路：根据整数符号决定直接返回原值还是返回相反数。
#include<iostream>
using namespace std;

int abs(int n)
{
    if(n>=0)return n; // 非负数的绝对值就是它本身。
    else return -n;
}
int main()
{
    int m;
    cin>>m;
    cout<<abs(m);
}
// 总结：实现绝对值时零应归入非负分支。