// 思路：保存输入序列并线性扫描，记录最大值及其首次出现的位置。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>a;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int num=0,max=-1000;
    for(int i=0;i<N;i++)
    {
        if(a[i]>max) // 只在严格变大时更新，因此相同最大值会保留第一次出现的位置。
        {
            max=a[i];
            num=i;
        }
    }
    cout<<max<<endl<<num+1<<endl;
    return 0;
}
// 总结：位置输出采用一基编号时，要在零基数组下标上加一。