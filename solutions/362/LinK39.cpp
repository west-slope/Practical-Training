#include<iostream>
using namespace std;

char fates[21][21];
int w,h;
int dx[4]{0,0,1,-1},dy[4]={1,-1,0,0};
long long dfs(int i,int j)
{
    long long res=1;
    fates[i][j]='#';
    for(int k=0;k<4;k++)
    {
        int x=i+dx[k],y=j+dy[k];
        if(x>=0&&y>=0&&x<h&&y<w&&fates[x][y]=='.')
        {
            res+=dfs(x,y);
        }
    }
    return res;
}


int main()
{
    while(cin>>w>>h,w||h)
    {
        int x,y;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>fates[i][j];
                if(fates[i][j]=='@')
                {
                    x=i;y=j;
                }
            }
        }
        cout<<dfs(x,y)<<endl;
    }
    
    return 0;
}