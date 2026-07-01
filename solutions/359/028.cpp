#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>=0&&a<=2000)
    {
        cout<<"Isento"<<endl;
    }
    else if(a>2000&&a<=3000)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(a-2000)*0.08<<endl;
    }
    else if(a>3000&&a<=4500)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000*0.08+(a-3000)*0.18)<<endl;
    }
    else if(a>4500)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000*0.08+1500*0.18+(a-4500)*0.28)<<endl;
    }
}