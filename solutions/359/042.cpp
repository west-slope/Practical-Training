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
        total += count;
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