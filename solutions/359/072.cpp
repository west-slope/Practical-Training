// 思路：先处理平局，再列出玩家一获胜的三种循环关系，其余情况归玩家二。
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    if(a == b)
        cout << "Tie" << endl;
    else if((a == "Rock" && b == "Scissors") || // 石头、剪刀、布的胜负关系用三个或条件完整描述。
            (a == "Scissors" && b == "Paper") ||
            (a == "Paper" && b == "Rock"))
        cout << "Player1" << endl;
    else
        cout << "Player2" << endl;
    
    return 0;
}
// 总结：循环胜负关系适合列出一方获胜组合，再用默认分支覆盖另一方。