// 思路：遍历整行字符串，统计字符编码位于零到九之间的数字字符。
#include<iostream>
using namespace std;
#include<string>


int main()
{
    string a;
    getline(cin,a);  
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9') // 只有处于数字字符范围内的字符才增加计数。
            count++;
    }
    cout<<count<<endl;
}
// 总结：判断字符是否为数字应比较字符范围，而不是直接使用数值零到九。