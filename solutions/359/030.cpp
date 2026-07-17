// 思路：从一开始以二为步长，输出不超过输入上限的所有正奇数。
#include<iostream>
using namespace std;
int main(){
    int X;
    cin>>X;
    for(int i=1;i<=X;i+=2) // 从第一个正奇数开始递增二即可只访问奇数。
    {
        cout<<i<<endl;
    }
}
// 总结：直接按目标数列的规律枚举比逐个判断奇偶更高效。