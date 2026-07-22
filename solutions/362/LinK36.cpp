//要求连续划分
#include<iostream>
#include<cmath>
using namespace std;
int cost[1000001],N,M;
int total=0,Mincoast=1<<30;

bool isBudgetBigEnough(int m)//判断该预算是否合理
{
    int cnt=1,subtotal=0;
    for(int i=0;i<N;i++)
    {
        if(cost[i]>m)return false;
        if(cost[i]+subtotal>m)
        {
            subtotal=cost[i];
            cnt++;
            if(cnt>M)return false;
        }
        else subtotal+=cost[i];
    }
    return true;
}

int binarySearch(int nums[],int n)//采用二分求最小预算
{
    int l=Mincoast,r=total;
    int lastValidbudget=0;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(isBudgetBigEnough(mid))
        {
            r=mid;
            lastValidbudget=mid;
        }
        else{
            l=mid+1;
        }
    }
    return lastValidbudget;
}

int main()
{

    //freopen("7.in","r",stdin);//用于调式代码使用输入输出重定向读入测试数据，并且输出
    //freopen("7o.out","w",stdout);
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&cost[i]);
        if(cost[i]<Mincoast)Mincoast=cost[i];
        total+=cost[i];
    }
    cout<<binarySearch(cost,N)<<endl;

    return 0;
}

//总结：最小预算应该在最小值与总和之间，采用二分方法来快速判断是否可行