// 思路：按高位到低位模拟长除法，每次用前一余数拼接当前数位求商和新余数。
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

string a;
int b,m;
vector<int>div(vector<int>&A,int b)
{
    vector<int>C(A.size()-to_string(b).length());
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t*=10; // 把上一位余数扩大十倍后再加入当前数位。
        t+=A[i];
        C.push_back(t/b);
        t%=b;
    }
    m=t;
    while(C.front()==0&&C.size()>1)C.erase(C.begin()); 
    return C;
}

void print(vector<int>A)
{

    for(int i=0;i<A.size();i++)
    {
        cout<<A[i];
    }
    cout<<endl;
    cout<<m<<endl;
}

int main()
{
    cin>>a>>b;
    vector<int>A;
    for(int i=0;i<a.size();i++)
    {
        A.push_back(a[i]-'0');
    }
    print(div(A,b));

    return 0;
}
// 总结：高精度除以整数时要同时输出去除前导零的商和最终余数。
