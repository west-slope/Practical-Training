// 思路：按行列顺序读入二维数组，再保持相同布局逐行输出。
#include<iostream>
using namespace std;
int main()
{
    int a[200][200],row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j!=0)cout<<" ";
            cout<<a[i][j]; // 双层循环按照行优先顺序访问每个矩阵元素。
        }
        cout<<endl;
    }
    
 
 
}
// 总结：矩阵格式输出应控制行内空格，并在每一行结束后换行。