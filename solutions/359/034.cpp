// 思路：枚举给定范围内的整数，输出除以 N 后余数等于二的数。
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>9998)return 0;
    for(int i=1;i<=10000;i++)
    {
        if(i%N==2) cout<<i<<endl; // 用取模结果直接筛选满足指定余数的整数。
    }
    return 0;
}
// 总结：余数筛选的核心是取模条件，同时要留意除数和枚举上界。