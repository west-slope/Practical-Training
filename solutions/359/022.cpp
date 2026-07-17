// 思路：把两个时刻都换算成从零点开始的分钟数，再计算包含跨日情况的时间差。
#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int A, B, C, D,temp;
    cin >> A >> B >> C >> D;
    int m1 = A * 60 + B;
	int m2 = C * 60 + D;
    if (m1 >= m2)temp = 24 * 60 + m2 - m1; // 结束时刻不晚于开始时刻时，需要补上一整天的分钟数。
	else temp = m2 - m1;
	cout << temp / 60 << ":" << temp % 60 << endl;
    return 0;
}
// 总结：统一换算成分钟后，时差计算和跨日处理都会更直接。