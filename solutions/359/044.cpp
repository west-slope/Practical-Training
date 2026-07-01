#include<iostream>
using namespace std;
int main()
{
    int V;
    cin >> V; 
    for(int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << V << endl;
        V = V * 2;
    }
    return 0;
}