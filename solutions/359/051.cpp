#include<iostream>
#include<iomanip>
using namespace std;
int main()//测试案例存在问题
{
    int L;
    char op;
    cin >> L >> op;
    double a[12][12];
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cin >> a[i][j];
        }
    }
    double sum = 0;
    for(int j = 0; j < 12; j++)
    {
        sum += a[L][j];
    }
    cout << fixed << setprecision(1);
    if(op == 'S')
    {
        cout << sum << endl;
    }
    else if(op == 'M')
    {
        cout << sum / 12 << endl;
    }
    return 0;
}