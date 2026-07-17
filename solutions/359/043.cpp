// 思路：读取十个整数，输出时把非正元素替换为一并保留下标格式。
#include<iostream>
using namespace std;
int main(){
    int x[10];
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    for(int i=0;i<10;i++)
    {
            if(x[i]<=0) // 小于等于零的元素统一按一输出。
            {cout<<"X["<<i<<"] = "<<1<<endl;}
            else
            {cout<<"X["<<i<<"] = "<<x[i]<<endl;}
    }

    return 0;
}
// 总结：数组替换题要注意条件包含零，并按题目要求输出原下标。