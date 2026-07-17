// 思路：用动态数组保存斐波那契数列，从两个一开始递推到所需项。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(1);
    a.push_back(1);
    int n;
    cin>>n;
    for(int i=0,j=1;i<n;i++,j++)
    {
        a.push_back(a[i]+a[j]); // 每次把相邻前两项之和追加为下一项。
    }
    cout<<a[n-1];

}
// 总结：递推数列要正确对应题目采用的一基项号和数组零基下标。