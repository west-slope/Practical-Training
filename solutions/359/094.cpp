// 思路：从左上角递归尝试向右和向下两种移动，统计到达目标点的路径数。
#include<iostream>
using namespace std;
int dx[]={0,1},dy[]={1,0};

int n,m;
int xunlu(int i,int j)
{
    if(i==n&&j==m)return 1;
    if(i>n||j>m)return 0;
    int res=0;
    for(int k=0;k<2;k++)
    {
        i+=dx[k],j+=dy[k];
        res+=xunlu(i,j); // 每个合法方向的递归路径数量都累加到当前状态。
        i-=dx[k],j-=dy[k];
    }
    return res;
}
int main()
{

    cin>>n>>m;
    cout<<xunlu(0,0);


}
// 总结：搜索后恢复坐标可以避免一次分支的移动影响下一分支。