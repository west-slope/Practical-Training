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
        if(i == 0 || num < minVal)
        {
            minVal = num;
            minPos = i;
        }
    }
    cout << "Menor valor: " << minVal << endl;
    cout << "Posicao: " << minPos << endl;
    return 0;
}