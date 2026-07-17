// 思路：逐位检查每个整数的二进制最低位，并右移直到所有位处理完毕。
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m;
    while(m--){
        cin>>n;
        int count=0;
        while(n>0)
        {
            count+=n&1; // 最低位为一时计数增加，按位与可直接取出该位。
            n>>=1;
        }
        cout<<count<<" ";
    }
}
// 总结：统计二进制一的数量时，右移可以依次访问每一位。