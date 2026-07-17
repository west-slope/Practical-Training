// 思路：用试除法判断每个数是否为质数，并输出二到 N 之间的全部质数。
#include<iostream>
#include<cmath>
using namespace std;
typedef long long LL;
bool isPrime(LL n)
{
    if(n==1)return false;
    else if(n==2)return true;
    else if(n%2==0&&n!=2)return false;
    for(LL i=3;i*i<=n;i++) // 只需尝试到平方根，若存在因子必有一个不超过平方根。
    {
        if(n%i==0)return false;
    }
    return true;
}
 int main()
 {
    LL N;
    cin>>N;
    for(LL i=2;i<=N;i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
 }
// 总结：质数判断要单独排除一和偶数，并控制试除上界避免无效枚举。
