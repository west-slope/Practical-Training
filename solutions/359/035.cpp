#include<iostream>
using namespace std;
int main()
{
    int N, x;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        if(x>=10&&x<=20)
        {
            count++;
        }
    }
    cout<<count<<" in"<<endl;
    cout<<N-count<<" out"<<endl;
    return 0;
}