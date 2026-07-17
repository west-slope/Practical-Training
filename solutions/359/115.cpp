// 思路：用双指针扫描两个数组，只有元素匹配时推进子序列指针。
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,m;
    int a[100001],b[100001];
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    int i=0,j=0;

    while(j<m)
    {
        if(a[i]==b[j])
        {
            i++,j++; // 匹配成功说明子序列的当前元素已在主序列中找到。
        }
        else j++;
    }
    if(i==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
// 总结：判断子序列无需回退主序列，只需保持目标元素出现顺序。