#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;


int main()
{
    int target, n;
    cin >> target >> n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}