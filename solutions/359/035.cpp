// 思路：逐个读取 N 个整数，统计落在闭区间十到二十内的数量。
#include<iostream>
using namespace std;
int main()
{
    int N, x;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        if(x>=10&&x<=20) // 上下界都包含在区间内，因此同时使用大于等于和小于等于。
        {
            count++;
        }
    }
    cout<<count<<" in"<<endl;
    cout<<N-count<<" out"<<endl;
    return 0;
}
// 总结：区间计数完成后，区间外数量可直接用总数减去区间内数量。