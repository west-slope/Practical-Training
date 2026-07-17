// 思路：读取两个数组后，用第一个数组的前 m 项覆盖第二个数组对应位置。
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    int n1,n2,m;
    cin>>n1>>n2>>m;
    int a[200]={0},b[200]={0};
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        b[i]=a[i]; // 逐项复制前 m 个元素完成目标数组前缀替换。
    }
    for(int i=0;i<n2;i++)
    {
        cout<<b[i]<<" ";
    }
}
// 总结：数组复制要确保复制长度不超过源数组和目标数组的有效范围。