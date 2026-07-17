// 思路：先逆序输出数组前 size 个元素，再顺序输出剩余元素。
#include<iostream>
using namespace std;
int main()
{
    int n,size,a[2000];
    cin>>n>>size;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=size-1;i>=0;i--) // 从 size-1 递减到零即可翻转指定前缀。
    {
        cout<<a[i]<<" ";
    }
    for(int i=size;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
// 总结：局部逆序只改变指定区间，区间之外的数据仍按原顺序处理。