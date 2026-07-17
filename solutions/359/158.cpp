// 思路：维护不同长度递增子序列的最小末尾值，用二分查找更新当前位置。
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
        auto it = lower_bound(tails.begin(), tails.end(), a[i]); // 找到第一个不小于当前数的位置，用更小末尾值替换它。
        if (it == tails.end()) {
            tails.push_back(a[i]);
        } else {
            *it = a[i];
        }
    }
    
    cout << tails.size() << endl;
    
    return 0;
}
// 总结：tails 的长度等于最长严格递增子序列长度，但其中元素不一定构成原序列答案。