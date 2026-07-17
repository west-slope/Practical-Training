// 思路：用容器切换元素的存在状态，成对出现的数会相互抵消，留下未配对元素。
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100001];
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(find(b.begin(),b.end(),a[i])==b.end())b.push_back(a[i]); // 首次遇到元素就加入，再次遇到时将它删除。
        else b.erase(find(b.begin(),b.end(),a[i]));
    }

    for(int i=0;i<b.size();i++)
        if(b[i]!=0){
            cout<<b[i];break;
        }
}
// 总结：利用成对抵消可以寻找出现奇数次的元素，但线性查找适合数据规模较小时使用。