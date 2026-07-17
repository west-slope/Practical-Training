// 思路：根据行列下标差的绝对值生成主对角线为一、向两侧递增的矩阵。
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a[1001][1001];
int N;
int main() {
    cin>>N;
    while(N!=0)
    {
        for(int i=0;i<N;i++)
        {
            {
                for(int j=0;j<N;j++)
                {
                    a[i][j]=int(abs(i-j)+1); // 行列距离为零时值为一，距离每增加一数值也增加一。
                    cout<<setw(3)<<a[i][j];
                }
            }
            cout<<endl;
        }
        if(N!=0)cout<<endl;
        cin>>N;
        
    }
    return 0;
}
// 总结：只依赖下标的矩阵无需预处理，可以在输出时直接计算。
