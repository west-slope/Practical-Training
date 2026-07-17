// 思路：按区间右端点升序排序，每次遇到未被当前点覆盖的区间就选择它的右端点。

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<PII> segs;
    for(int i=0;i<n;i++){
        int l,r; cin>>l>>r;
        segs.push_back({r,l});
    }
    sort(segs.begin(),segs.end());
    int res=0, ed=-2e9;
    for(auto seg:segs){
        if(seg.second>ed){ // 区间左端点超过已选点时，必须新增一个点并放在当前右端点。
            res++;
            ed=seg.first;
        }
    }
    cout<<res<<"\n";
}

// 总结：区间贪心选择最靠右的可行点，可以尽量覆盖后续更多区间。
