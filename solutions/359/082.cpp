// 思路：封装一个比较函数，返回两个整数中较大的一个。
#include<iostream>
using namespace std;

int max(int m,int n)
{
    if(m>n)return m; // m 更大时直接返回 m，否则返回 n。
    else return n;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<max(m,n);
}
// 总结：简单函数题要保证所有条件分支都有返回值。