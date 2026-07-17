// 思路：读取矩阵时累计主对角线上方的全部元素，再按模式求和或平均。
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
            if(i<j)sum+=a[i][j]; // 列下标大于行下标表示元素位于主对角线上方。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
// 总结：十二阶矩阵主对角线上方共有六十六个元素。