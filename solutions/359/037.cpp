// 思路：持续读取直到得到正整数 n，再累加从 A 开始的连续 n 个整数。
#include<iostream>
using namespace std;
int main()
{
    int A,sum=0;
    cin>>A;
    int n;
    cin>>n;
    while(!(n>0)) // 无效的非正输入会被跳过，直到读到合法的项数。
    {
        cin>>n;
    }
    for(int i=A,j=0;j<n;i++,j++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
// 总结：连续项求和时可用双变量同时控制当前值和已经累加的项数。
