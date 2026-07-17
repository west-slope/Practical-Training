// 思路：读取完整数组后，只输出从开头起的 size 个元素。
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
    
    for(int i=0;i<size;i++) // 循环上界限制了输出的数组前缀长度。
    {
        cout<<a[i]<<" ";
    }
}
// 总结：输出数组子区间时要把 size 理解为数量而不是最后一个下标。