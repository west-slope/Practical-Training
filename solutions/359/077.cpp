// 思路：先统计每个小写字母出现次数，再按原顺序寻找第一个只出现一次的字符。
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string a;
    int c[26]={0};
    getline(cin,a);
    char m;
    for(int i=0;a[i]!='\0';i++)
    {
        c[a[i]-'a']++;
        
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(c[a[i]-'a']==1) // 第二次遍历保证找到的是原字符串中最靠前的不重复字符。
        {
            cout<<a[i]<<endl;
            break;
        } 
        if(a[i+1]=='\0')
        {
            cout<<"no"<<endl;
        }
    }
}
// 总结：频次数组负责判断唯一性，按原串扫描负责保证位置顺序。