// 思路：累计武器总数及三种武器的分类数量，再分别计算它们所占百分比。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N; 
    int total = 0;
    int swords = 0;
    int blades = 0; 
    int spears = 0;    
    for(int i = 0; i < N; i++)
    {
        int count;
        char type;
        cin >> count >> type;  
        total += count; // 每组数量先计入总数，之后再按类型加入对应分类。
        if(type == 'C')
        {
            swords += count;
        }
        else if(type == 'R')
        {
            blades += count;
        }
        else if(type == 'F')
        {
            spears += count;
        }
    }
    double percentC =(double)swords / total * 100;
    double percentR =(double)blades / total * 100;
    double percentF =(double)spears / total * 100;
    cout << "Total: " << total << " weapons" << endl;
    cout << "Total swords: " << swords << endl;
    cout << "Total blades: " << blades << endl;
    cout << "Total spears: " << spears << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage of swords: " << percentC << " %" << endl;
    cout << "Percentage of blades: " << percentR << " %" << endl;
    cout << "Percentage of spears: " << percentF << " %" << endl;
    return 0;
}
// 总结：百分比计算前需要转换为浮点数，避免整数除法丢失小数。