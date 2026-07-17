// 思路：先保证两个端点有序，再从内部第一个奇数开始累加到另一端点之前。
#include<iostream>
using namespace std;
int main()
{
    int X,Y,temp,sum=0;
    cin>>X>>Y;
    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }
    if(X%2!=0)
    {
        X++;
    }
    for(int i=X+1;i<Y;i+=2) // 从较小端点之后开始并以二递增，只累加严格位于两数之间的奇数。
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
// 总结：处理两端之间的数据时要先排序端点，并明确是否包含端点。