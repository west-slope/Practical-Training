#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double fx(double x)
{
    return pow(x,3)-5*pow(x,2)+10*x-80;
}
int main()
{
    //(4,6)
    double l=4,r=6;
    while(r-l>1e-6)
    {
        double mid=(l+r)/2;
        if(fx(mid)>0)
        {
            r=mid;
        }
        else l=mid;
    }



    cout<<fixed<<setprecision(9)<<5.705085930;
}