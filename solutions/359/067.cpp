// 思路：读取整行字符串并逐字符计数，直到遇到字符串结尾。
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i;
    getline(cin,a);
    for(i=0;a[i]!='\0';i++) // 循环次数正好等于字符串中的字符数量。
    {
    
    }
    cout<<i<<endl;
}
// 总结：使用 getline 可以把空格一并读入，因此统计的是整行长度。