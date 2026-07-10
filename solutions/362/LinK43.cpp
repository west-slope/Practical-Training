#include<iostream>
using namespace std;
//补全下列两个函数即可
//从n中减lowbit循环
int lowbit(int n)
{
  //write your code here
  return n&-n;
}
int NumberOf1(int n) {
        int res = 0;
        while(n)
        {
          n-=lowbit(n);
          res+=1;
        }
      //write your code here
        return res;
}
// int main()
// {
//   int n;
//   cin>>n;
//   cout<<NumberOf1(n)<<endl;
// } 
