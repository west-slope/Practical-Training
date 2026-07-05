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
            m=i+strlen(b);
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