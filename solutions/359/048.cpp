#include<iostream>
using namespace std;
int main()
{
    long long a=0,b=1,N,num=0;
    cin >>N;
    if(N==0)
    {
        cout << 0 << endl;
        return 0;
    }
    if(N==1)
    {
        cout << 1 << endl;
        return 0;
    }
    for(long long i=2;i<=N;i++)
    {
        num=a+b;
        a=b;
        b=num;
        
    }
    cout << num << endl;
    return 0;
}
//F1=0
//F2=0+1
//F3=1+1
//F4=1+2
//F5=2+3