#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int j=1,num=0;
    for(int i=1;i<=N;i++){
        num=0;
        while(num<M-1)
        {
            cout<<j<<" ";
            num++;
            j++;
        }
        cout<<"SWORD"<<endl;
        j++;
    }
    return 0;
}