// 思路：读取矩阵时累计副对角线下方的全部元素，再计算和或平均值。
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
            if(i+j>11)sum+=a[i][j]; // 行列下标和大于十一表示位于副对角线下方。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
// 总结：严格大于可以排除副对角线自身的十二个元素。