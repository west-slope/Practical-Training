// 思路：使用深度优先搜索逐位选择未使用的数字，枚举一到 n 的所有排列。
#include<iostream>
using namespace std;
int n;
int used[10];
bool path[10];
void dfs(int u)
{

    if(u==n){
        for(int i=0;i<n;i++)
        {
            if(i!=0)cout<<" ";
            cout<<used[i];
        }
        cout<<endl;
        return ;
    }
    else{
        for(int i=1;i<=n;i++)
        {
            if(!path[i]){
                used[u]=i;
                path[i]=true; // 选择数字后标记已使用，防止同一排列中重复选取。
                dfs(u+1);
                path[i]=false;
                used[u]=0;
            }
        }
    }

}


int main()
{
    cin>>n;
    dfs(0);
}
// 总结：回溯必须在递归返回后撤销标记，才能继续尝试其他排列。