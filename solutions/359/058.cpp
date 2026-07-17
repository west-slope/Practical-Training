// 思路：筛选主对角线上方且副对角线下方的元素，得到矩阵右侧区域。
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
            if(i+j>11&&i<j)sum+=a[i][j]; // i 小于 j 且下标和大于十一时元素位于右侧三角区。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
// 总结：矩阵区域平均值的除数应对应实际包含的三十个元素。