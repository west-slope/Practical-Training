#include<iostream>
using namespace std;
int main()
{
    double a;
    int n=6,count=0;
    while(n--)
    {
        cin>>a;
        if(a>0)count++;
    }
    cout<<count<<" positive numbers"<<endl;
}