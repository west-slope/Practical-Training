// 思路：先找到原字符串中最大字符的位置，再扩容并把子串插入该字符之后。
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string str,substr;
    getline(cin,str);
    getline(cin,substr);
    char max='A' ;
    int m=0,n=substr.length();
    int len=str.length();
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>max) // 线性扫描记录字典序最大字符及其位置。
        {
            max=str[i];
            m=i;
        }
    } \
    str.resize(len+n); 
    for(int i=len;i>m;i--)
    {
        str[i+n]=str[i];
    }
    for(int i=m+1,j=0;substr[j]!='\0';i++,j++)
    {
        str[i]=substr[j];
    }
    cout<<str;
}
// 总结：原地插入前应先扩容，并从后向前移动尾部以避免覆盖数据。