#include<iostream>
using namespace std;

typedef long long LL;
const int N=100001;
LL a[N],temp[N];
int n;

LL merge_sort(LL arr[],int l,int r)
{
    LL res=0;
    if(l>=r)return 0;
    int mid=l+r>>1;//计算l+r的一半
    res+=merge_sort(arr,l,mid);
    res+=merge_sort(arr,mid+1,r);
    int p0=0,p1=l,p2=mid+1;
    
    while(p1<=mid&&p2<=r)
    {
        if(arr[p1]<=arr[p2]) temp[p0++]=arr[p1++];
        else {
            temp[p0++]=arr[p2++];
            res+=mid-p1+1;//一定要是mid
        }
    }
    while(p1<=mid)temp[p0++]=arr[p1++];
    while(p2<=r)temp[p0++]=arr[p2++];
    for(int i=l,j=0;i<=r;i++,j++)arr[i]=temp[j];//**
    return res;

}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<merge_sort(a,0,n-1)<<endl;
}