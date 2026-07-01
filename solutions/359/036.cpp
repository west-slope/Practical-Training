#include<iostream>
using namespace std;
int main()
{
    int X,Y,temp,sum=0;
    cin>>X>>Y;
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    if(X%2!=0)
    {
        X++;
    }
    for(int i=X+1;i<Y;i+=2)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}