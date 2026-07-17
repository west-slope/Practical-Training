// 思路：先把输入调整为不小于它的奇数，再连续输出六个相邻奇数。
#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;
    if(X%2==0)X+=1; // 输入为偶数时加一，使起点变为下一个奇数。
    for(int i=0;i<6;i++)
    {
        cout<<X<<endl;
        X+=2;
    }
    return 0;
}
// 总结：先规范化起点后再按固定步长生成序列，可减少循环内判断。