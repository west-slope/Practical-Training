// 思路：读取整行字符串，按原顺序输出每个字符并在字符后添加空格。
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i]<<" "; // 逐个访问字符可以保留原字符串中的顺序。
    }
}
// 总结：逐字符处理整行文本时应使用 getline，避免输入在空格处提前结束。