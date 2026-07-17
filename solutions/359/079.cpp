// 思路：从短到长枚举可能的周期长度，验证整个字符串能否由该前缀重复组成。
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    while(cin >> s && s != ".")
    {
        int n = s.length();
        for(int len = 1; len <= n; len++)
        {
            if(n % len == 0)
            {
                bool ok = true;
                for(int i = len; i < n; i++)
                {
                    if(s[i] != s[i % len]) // 用下标对周期长度取模，比较当前位置与对应周期字符。
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok)
                {
                    cout << n / len << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
// 总结：第一个通过验证的长度就是最小周期，字符串长度除以它即重复次数。