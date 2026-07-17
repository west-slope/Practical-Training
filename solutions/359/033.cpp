// 思路：读取六个实数并统计其中严格大于零的元素个数。
#include<iostream>
using namespace std;
int main()
{
    double a;
    int n=6,count=0;
    while(n--)
    {
        cin>>a;
        if(a>0)count++; // 只有正数才计数，零和负数都不计入。
    }
    cout<<count<<" positive numbers"<<endl;
}
// 总结：计数题应明确比较是否包含边界值零。