// 思路：对每个查询在线性数组中找到目标值的首次位置，并继续扫描得到末次位置。
#include<iostream>
using namespace std;
int a[20000],n,q,j;

void search(int m)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            j=i;
            cout<<i<<" ";
            while(a[j]==m) // 从首次命中位置向后移动，直到离开连续的目标区间。
            {
                j++;
            }
            if(j==i)cout<<i;
            else cout<<j-1<<endl;
            break;
        }
        else if(i==n-1)
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }

}

int main()
{
    int m;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>m;
        search(m);
    }

}
// 总结：查找重复区间要分别记录左右边界，未找到时输出两个负一。