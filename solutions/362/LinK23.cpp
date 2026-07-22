//枚举算法
//使用bitset来进行二进制位的取反
#include<iostream>
#include<bitset>
#include<cstring>
#include<algorithm>
using namespace std;


int main()
{
    string line;
    bitset<32> lock;//设置32位的二进制位
    int minTimes=1<<30;//初始化按钮次数为无穷大
    cin>>line;
    bitset<32>sourceLock(line);
    cin>>line;
    bitset<32>targetLock(line);

    int n=line.size();

    for(int p=0;p<2;p++)//p=0表示最左边按钮不按，p=1表示最左边按
    {//初始化
        lock=sourceLock;
        int times=0;//按下的次数
        int nextButton=p;//初始化下一个按钮的状态，是否按下

        for(int i=0;i<n;i++)
        {
            if(nextButton==1)
            {
                times++;
                if(i>0)
                {
                    lock.flip(i-1);//左边取反
                }
                lock.flip(i);//中间取反
                if(i<n-1)lock.flip(i+1);
            }
            if(lock[i]!=targetLock[i])nextButton=1;
            else nextButton=0;  
        }
        if(lock==targetLock)
            minTimes=min(minTimes,times);   
    }
    
    if(minTimes==1<<30)
        cout<<"impossible"<<endl;
    else
        cout<<minTimes<<endl;
        
    return 0;
}

//总结：学习了bitset的用法