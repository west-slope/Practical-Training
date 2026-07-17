// 思路：把大整数反向存入 vector，按位相加并持续传递进位直到结束。
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long LL;

vector<int>add(vector<int> &A,vector<int>&B)
{
    vector<int>C;
    for(int i=0,t=0;i<A.size()||i<B.size()||t;i++)
    {
        if(i<A.size())t+=A[i];
        if(i<B.size())t+=B[i];
        C.push_back(t%10); // 当前总和的个位写入结果，剩余部分作为下一位进位。
        t/=10;
    }
    return C;
}

void print(vector<int>A)
{
    for(int i=A.size()-1;i>=0;i--)
        cout<<A[i];
    cout<<endl;
}

int main()
{
    string a,b;
    cin>>a>>b;
    vector<int>A,B;

    for(int i=a.size()-1;i>=0;i--)
    {
        A.push_back(a[i]-'0');
    }
    for(int i=b.size()-1;i>=0;i--)
    {
        B.push_back(b[i]-'0');
    }

    print(add(A,B));

}
// 总结：循环条件要包含最终进位，避免最高位进位被遗漏。
