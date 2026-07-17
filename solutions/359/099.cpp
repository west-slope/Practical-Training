// 思路：用输入栈保存新元素、输出栈提供队首元素，从而模拟先进先出的队列。
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<int>in,out;
    int n;
    string a;
    while(cin>>a)
    {
        if(a=="push")
        {
            cin>>n;
            in.push(n);
        }
        else if(a=="pop")
        {
            if(out.empty())
            {
                while(!in.empty()) // 输出栈为空时把输入栈全部倒入，使最早元素移动到栈顶。
                {
                    out.push(in.top());
                    in.pop();
                }
                
            }
            if(!out.empty())
            {
                cout<<out.top()<<endl;
                out.pop();
            }
        }
        else if(a=="empty")
        {
            if(out.empty()&&in.empty())
            {
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
    }
}
// 总结：双栈队列只在输出栈为空时搬运，每个元素最多搬运一次。