// 思路：连续生成整数，每行输出 M-1 个数字，并用 SWORD 占据该行最后一个位置。
#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int j=1,num=0;
    for(int i=1;i<=N;i++){
        num=0;
        while(num<M-1) // 每行只循环输出前 M-1 个连续数字。
        {
            cout<<j<<" ";
            num++;
            j++;
        }
        cout<<"SWORD"<<endl;
        j++;
    }
    return 0;
}
// 总结：按行分组输出时应分别维护全局序号和当前行元素数量。