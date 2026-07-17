// 思路：从零和一开始递推斐波那契数列，并输出前 N 项。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long N;
    cin >>N;
    vector<long long>a;
    a.push_back(0);
    a.push_back(1);
    for(int i=2;i<=N;i++)
    {
        long long temp;
        temp=a[i-1]+a[i-2]; // 每个新项由前两项相加得到。
        a.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
// 总结：递推前要先准备足够的初始项，并注意大数范围使用 long long。