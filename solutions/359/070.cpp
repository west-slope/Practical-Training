// 思路：把每个字符与后一个字符的编码相加，最后一个字符与首字符相加形成环。
#include<iostream>
using namespace std;
#include<string>


int main()
{
    string a;
    char b[200];
    getline(cin,a);  
    int i;
    for(i=0;a[i+1]!='\0';i++)
    {
        b[i]=a[i]+a[i+1]; // 相邻两个字符相加得到结果字符串当前位置。
    }
    b[i]=a[0]+a[i];
    b[i+1]='\0';
    cout<<b;
}
// 总结：环形相邻处理要单独连接最后一个元素和第一个元素。