// 思路：用二分维护各长度递增子序列的最小末尾值，求最长递增子序列长度。
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 100010;
int a[N];
int n;

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> tails;
    
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(tails.begin(), tails.end(), a[i]); // 定位第一个不小于当前值的位置进行替换或扩展。
        if (it == tails.end()) {
            tails.push_back(a[i]);
        } else {
            *it = a[i];
        }
    }
    
    cout << tails.size() << endl;
    
    return 0;
}
// 总结：较小的序列末尾为后续元素留下更多增长空间。