// 思路：在足够大的实数区间内二分，依据中点立方与目标值的关系逼近立方根。
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
    double n;
    double mid;
    cin>>n;
    double left=-10000,right=10000;
    while(right-left>1e-8)
    {
        mid=(left+right)/2;
        if(pow(mid,3)>=n) // 中点立方偏大时收缩右边界，否则提高左边界。
            right=mid;
        else left=mid;
    }
    cout<<fixed<<setprecision(6)<<mid<<endl;
}
// 总结：浮点二分使用误差作为终止条件，并保留足够迭代精度。