// 思路：从初始值开始连续输出十项，每输出一项后将数值翻倍。
#include<iostream>
using namespace std;
int main()
{
    int V;
    cin >> V; 
    for(int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << V << endl;
        V = V * 2; // 当前项乘二后得到下一项。
    }
    return 0;
}
// 总结：递推序列可以边输出边更新，不必额外保存整个数组。