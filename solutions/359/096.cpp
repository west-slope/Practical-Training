// 思路：逐字符扫描输入字符串，把空格替换为百分号二零，其余字符原样输出。
#include<iostream>
using namespace std;
#include<string>

int main()
{
    string a;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            cout<<"%20"; // 遇到空格时输出编码后的三字符替代文本。
        else cout<<a[i];
    }
}
// 总结：边扫描边输出可以避免额外构造新字符串。