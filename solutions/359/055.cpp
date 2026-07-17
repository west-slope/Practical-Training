// 思路：利用行列下标关系筛选主对角线上方且副对角线上方的矩阵区域。
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
            if(i+j<11&&i<j)sum+=a[i][j]; // 两个条件共同限定矩阵上方的中央三角区域。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
// 总结：矩阵区域题应把几何位置转换为 i、j 以及 i+j 的不等式。