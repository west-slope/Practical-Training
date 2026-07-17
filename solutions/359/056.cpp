// 思路：利用行列下标关系筛选主对角线下方且副对角线下方的矩阵区域。
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
            if(i+j>11&&i>j)sum+=a[i][j]; // 两个条件共同限定矩阵下方的中央三角区域。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/30<<endl;
}
// 总结：对角线区域的边界不参与统计，条件必须使用严格不等号。