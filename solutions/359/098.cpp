// 思路：把终止标记前输入的整数依次存入数组，再从后向前输出。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int>a;
    cin>>n;
    while(n!=-1)
    {
        a.push_back(n);
        cin>>n;
    }
    for(int i=a.size()-1;i>=0;i--) // 倒序遍历容器即可反向输出已保存的数据。
    {
        cout<<a[i]<<endl;
    }

}
// 总结：哨兵值只负责结束输入，不应加入需要输出的序列。