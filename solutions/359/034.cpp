#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>9998)return 0;
    for(int i=1;i<=10000;i++)
    {
        if(i%N==2) cout<<i<<endl;
    }
    return 0;
}