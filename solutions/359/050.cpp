#include<iostream>
using namespace std;
int main()
{
    int M, N; 
    while(cin >> M >> N)
    {
        if(M <= 0 && N <= 0)
        {
            break;
        }
        if(M > N)
        {
            int temp = M;
            M = N;
            N = temp;
        }
        int sum = 0;
        for(int i = M; i <= N; i++)
        {
            cout << i;
            if(i < N) cout << " ";  // 最后一个数字后面不加空格
            sum += i;
        }
        cout << " Sum=" << sum << endl;
    }
    return 0;
}