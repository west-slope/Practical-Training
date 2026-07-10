#include<iostream>
using namespace std;
int N,T,n; 
int a[100001];


int bsearch(int l,int r,int n)
{

    while(l<r)
    {
        int mid=l+r>>1;
        if(a[mid]>=n)r=mid;
        else  l=mid+1;
    }
    if(a[l]==n)return l;
    else return -1;
}


int main()
{
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        cin>>n;
        cout<<bsearch(0,N-1,n)<<endl;
    }

}