#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>a;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int num=0,max=-1000;
    for(int i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            num=i;
        }
    }
    cout<<max<<endl<<num+1<<endl;
    return 0;
}