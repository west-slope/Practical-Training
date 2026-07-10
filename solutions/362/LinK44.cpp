#include<iostream>
using namespace std;
int lowbit(int n)
{
    return n&-n;
}


int main(){
    int n,m;
    cin>>n;
    m=lowbit(n);
    int res=0;
    while(m!=1)
    {
        m=m>>1;
        res++;
    }
    cout<<res;


}
//2.打表法
// #define N 16
// int log[1<<N];

// void BuildLog2Table(int n)
// {
//     for(int i=0;i<n;i++)
//         log[1<<i]=i;
// }
// int query(int n)
// {
//     return log[lowbit(n)];
// }
//int main()
// {
//     int n;cin>>n;
//     cout<<query(n);
// }
