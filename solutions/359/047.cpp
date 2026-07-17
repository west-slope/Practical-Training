// 思路：遍历 N 个整数，动态维护最小值及其零基下标。
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;   
    int minVal;
    int minPos = 0;   
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if(i == 0 || num < minVal) // 首个元素负责初始化，后续只有遇到更小值才更新。
        {
            minVal = num;
            minPos = i;
        }
    }
    cout << "Menor valor: " << minVal << endl;
    cout << "Posicao: " << minPos << endl;
    return 0;
}
// 总结：用首元素初始化最值可避免随意设置哨兵，并能保留最小值首次出现的位置。