// 思路：反复读取 n，并输出从一到 n 的序列，读到零时结束。
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0) // 零作为终止标记，不参与序列输出。
    {
        for(int i=1;i<=n;i++)
        {
            if(i>1)cout<<" ";
            cout<<i;
        }
        cout<<endl;
        cin>>n;
    }
}
// 总结：多组不定数量输入常用哨兵值控制循环，同时要处理元素间空格。