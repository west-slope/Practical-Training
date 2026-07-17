// 思路：读取矩阵时累计主对角线下方的全部元素，并按指定模式输出。
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
            if(i>j)sum+=a[i][j]; // 行下标大于列下标表示元素位于主对角线下方。
        }
    }

    if(type=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
    else if(type=='M')cout<<fixed<<setprecision(1)<<sum/66<<endl;
}
// 总结：主对角线两侧元素数量相同，十二阶矩阵每侧都是六十六个。