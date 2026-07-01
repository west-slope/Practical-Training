#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long N;
    cin >>N;
    vector<long long>a;
    a.push_back(0);
    a.push_back(1);
    for(int i=2;i<=N;i++)
    {
        long long temp;
        temp=a[i-1]+a[i-2];
        a.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}