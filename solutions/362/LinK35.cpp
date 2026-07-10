#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
    double n,temp,mid;
    cin>>n;
    double l=-10000,r=10000;
    while(r-l>1e-8)
    {
        mid=(l+r)/2;
        if(pow(mid,3)>n)r=mid;
        else l=mid;
    }
    cout<<fixed<<setprecision(6)<<mid;
    
}