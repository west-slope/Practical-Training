// 思路：预处理前缀和，使每次区间查询都能用两个前缀值之差快速回答。
#include<iostream>
using namespace std;

int n,m,ss=0;
int l,r;
int a[100001],s[100001];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ss+=a[i];
        s[i]=ss; // s[i] 保存从第一项到第 i 项的累计和。
    }
    while(cin>>l&&cin>>r)
    {
        cout<<s[r]-s[l-1];
        cout<<endl;
    }

}
// 总结：区间 l 到 r 的和等于 s[r]-s[l-1]，预处理后每次查询只需常数时间。
