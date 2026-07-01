#include<iostream>
using namespace std;
int main()
{
    int A,sum=0;
    cin>>A;
    int n;
    cin>>n;
    while(!(n>0))
    {
        cin>>n;
    }
    for(int i=A,j=0;j<n;i++,j++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
