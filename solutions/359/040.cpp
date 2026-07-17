// 思路：枚举一到十作为乘数，按固定格式输出输入数的乘法表。
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" x "<<N<<" = "<<i*N<<endl; // 每一行同时输出乘法表达式和计算结果。
    }
    return 0;
}
// 总结：格式化输出题除了结果正确，还要严格匹配空格和符号。