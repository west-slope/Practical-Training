// 思路：读入一百个实数，只输出其中小于等于十的元素及对应下标。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A[100];   
    for(int i = 0; i < 100; i++)
    {
        cin >> A[i];
    }  
    cout << fixed << setprecision(1);
    for(int i = 0; i < 100; i++)
    {
        if(A[i] <= 10) // 筛选条件包含恰好等于十的元素。
        {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    return 0;
}
// 总结：数组筛选输出时应同时保留原始位置和规定的小数精度。