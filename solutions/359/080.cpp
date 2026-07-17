// 思路：在主串中寻找子串 b 的首次结束位置和子串 c 的最后开始位置，计算两者间距。
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char a[1000]={0},b[100]={0},c[100]={0};
    char s;
    cin>>s;
    for(int i=0;s!=',';i++)
    {
        a[i]=s;
        cin>>s;
    }

    cin>>s;
    for(int i=0;s!=',';i++)
    {
        b[i]=s;
        cin>>s;
    }
    cin>>s;
    for(int i=0;s!=','&&s!='\n'&&cin;i++)
    {
        c[i]=s;
        cin>>s;
    }

    int m=-1,n=-1;
    for(int i=0;a[i]!='\0';i++)
    {
        bool flag=false;
        int found=1;
        for(int j=i,k=0;b[k]!='\0';k++,j++)
        {
            if(a[j]!=b[k])
            {
                found=0;break;
            }
        }
        if(found)
        {
            flag=true;
            m=i+strlen(b); // 找到第一个 b 后记录它末尾后一位，作为中间区间起点。
            break;
        }
    }
    for(int i=strlen(a);i>=m;i--)
    {
        bool flag=false;
        int found=1;
        for(int j=i,k=0;c[k]!='\0';k++,j++)
        {
            if(a[j]!=c[k])
            {
                found=0;break;
            }
        }
        if(found)
        {
            flag=true;
            n=i;
            break;
        }
    }
    if(m==-1||n==-1){
        cout<<-1;
        return 0;
    }
    else {
        cout<<n-m;
    }

}
// 总结：双子串定位要明确使用首次还是末次出现，任一不存在都应输出负一。