#include<iostream>
using namespace std;
int temp[100001],a[100001],n;
void merge_sort(int arr[],int l,int r)
{
    if(l>=r)return;
    int mid=l+r>>1;
    merge_sort(arr,l,mid),merge_sort(arr,mid+1,r);
    int p0=0,p1=l,p2=mid+1;
    while(p1<=mid&&p2<=r)
    {
        if(arr[p1]<=arr[p2])temp[p0++]=arr[p1++];
        else temp[p0++]=arr[p2++];
    }
    while(p1<=mid)temp[p0++]=arr[p1++];
    while(p2<=r)temp[p0++]=arr[p2++];
    for(int i=l,k=0;i<=r;i++,k++)arr[i]=temp[k];//**
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}