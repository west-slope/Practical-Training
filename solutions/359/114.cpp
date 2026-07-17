// 思路：利用两个有序数组的单调性，让一个指针从前向后、另一个从后向前寻找目标和。
#include<iostream>
#include<string>

using namespace std;

int a[100001],b[100001];
int n,m,k;
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    int i=0,j=m-1,t=a[i]+b[j];

    while(t!=k)
    {
        if(t<k)i++; // 当前和偏小时移动第一个数组指针以增大总和。
        else if(t>k)j--;
        t=a[i]+b[j];
    }
    cout<<i<<" "<<j;
}
// 总结：双指针依赖有序性，每次移动都能排除一批不可能的组合。