// 思路：每个位置取到四条边距离的最小值，从而生成由外向内递增的同心方阵。
#include <iostream>
#include<iomanip>
using namespace std;
int a[1001][1001];
int N;

int min(int a,int b,int c,int d)
{
    int m1=a>b?b:a;
    int m2=c>d?d:c;
    return m1>m2?m2:m1;
}

void handle(int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j]=min(i+1,j+1,N-i,N-j); // 四个方向边界距离的最小值决定当前位置所在的层数。
        }
    }
}

int main() {
    cin>>N;
    while(N!=0)
    {
        handle(N);
        for(int i=0;i<N;i++)
        {
            {
                for(int j=0;j<N;j++)
                cout<<setw(3)<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>N;
    }
    return 0;
}
// 总结：同心矩阵可以转化为点到四条边的最短距离问题。
