// 思路：读取矩阵时累计副对角线上方的全部元素，再按模式输出结果。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char type;
    cin>>type;
    double a[13][13],sum=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i+j<11)sum+=a[i][j]; // 行列下标和小于十一表示位于副对角线上方。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
// 总结：副对角线区域判断取决于行列下标之和，而不是单独比较行列。