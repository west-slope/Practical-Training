// 思路：用单调队列分别维护滑动窗口中的最小值和最大值。
#include <bits/stdc++.h>
using namespace std;
const int N=1000010;
int a[N],q[N];
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,k; if(!(cin>>n>>k)) return 0;
    for(int i=0;i<n;i++) cin>>a[i];
    int hh=0,tt=-1;
    for(int i=0;i<n;i++){
        if(hh<=tt && i-k+1>q[hh]) hh++;
        while(hh<=tt && a[q[tt]]>=a[i]) tt--; // 求最小值时删除队尾所有不小于当前值的下标，保持队列递增。
        q[++tt]=i;
        if(i>=k-1) cout<<a[q[hh]]<<' ';
    }
    cout<<"\n";
    hh=0,tt=-1;
    for(int i=0;i<n;i++){
        if(hh<=tt && i-k+1>q[hh]) hh++;
        while(hh<=tt && a[q[tt]]<=a[i]) tt--;
        q[++tt]=i;
        if(i>=k-1) cout<<a[q[hh]]<<' ';
    }
    cout<<"\n";
}
// 总结：单调队列既要清理过期下标，也要维持值的单调性。