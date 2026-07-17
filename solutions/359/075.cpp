// 思路：手动按空格和句号切分单词，记录每个单词长度并输出最长单词。
#include<iostream>
using namespace std;
#include<string>
int main()
{
    char a[501][20];
    string str;
    int count=0,b[501]={0};
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;;j++,i++)
        {
            if(str[i]==' '||str[i]=='.'){
                b[count++]=j;
                str[i]='\0';
                break;
            }
            a[count][j]=str[i];
        }
    }
    int max=-1,m=0;
    for(int i=0;b[i]!=0;i++)
    {
        if(b[i]>max){ // 只在长度严格增大时更新，从而保留第一个最长单词。
            max=b[i];
            m=i;
        }
    }
    cout<<a[m]<<endl;
}
// 总结：字符串切分时既要记录内容，也要正确处理最后的句号终止符。
