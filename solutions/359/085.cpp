// 思路：反复用较大数除以较小数取余，直到余数为零，得到最大公约数。
#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;
    if(b>a)swap(a,b);
    n=a%b;
    while(n!=0) // 余数不为零时继续把问题转换为规模更小的一组数。
    {
        a=n;
        swap(a,b);
        n=a%b;
    }
    cout<<b;
}
// 总结：欧几里得算法利用 gcd(a,b)=gcd(b,a%b) 快速缩小数据。