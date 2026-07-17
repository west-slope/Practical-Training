// 思路：使用标准交换函数互换两个整数，再按交换后的顺序输出。
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    swap(m,n); // swap 同时完成两个变量值的互换。
    cout<<m<<" "<<n;
}
// 总结：交换变量无需手写临时变量时可以直接使用标准库函数。