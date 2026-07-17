// 思路：使用冒泡排序按整数成员升序排列，整数相同时再按浮点成员升序。
#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
struct sanyuan
{
    int num;
    double m;
    string str;
};

int main()
{
    int N;
    cin>>N;
    sanyuan s[200]; 
    for(int i=0;i<N;i++)
    {
        cin>>s[i].num>>s[i].m>>s[i].str;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(s[j].num>s[j+1].num||(s[j].num==s[j+1].num&&s[j].m>s[j+1].m)) // 复合条件实现第一关键字和第二关键字的排序规则。
            {
                sanyuan temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<s[i].num<<" "<<fixed<<setprecision(2)<<s[i].m<<" "<<s[i].str<<endl;
    }
}
// 总结：多关键字排序应先比较高优先级字段，只有相等时才比较下一字段。