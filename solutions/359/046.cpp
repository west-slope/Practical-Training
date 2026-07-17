// 思路：通过交换首尾对称位置，把二十个整数原地逆序。
#include<iostream>
using namespace std;

int main()
{
    int a[20];
    for(int i = 0; i < 20; i++)
    {
        cin >> a[i];
    }
    int temp;
    for(int i=0;i<=9;i++)
    {
        temp=a[i];
        a[i]=a[19-i]; // 第 i 个元素与倒数第 i 个元素交换。
        a[19-i]=temp;
    }
    for(int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
// 总结：原地逆序只需处理数组前半段，否则会把已经交换的元素换回去。