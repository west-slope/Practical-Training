// 思路：读取十二阶矩阵时只累计指定列，再根据模式输出该列的和或平均值。
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int C;
    char mode;
    cin >> C >> mode;
    double sum = 0.0;
    double val;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> val;
            if (j == C) { // 列下标等于 C 时才把当前元素加入统计。
                sum += val;
            }
        }
    }    
    if (mode == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if(mode == 'M') {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }
       return 0;
}
// 总结：固定十二个元素的列平均值应使用总和除以十二。