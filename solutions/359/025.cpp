// 思路：根据输入的电话区号逐项匹配城市，未匹配时输出未登记提示。
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==61) // 从已知区号开始逐项判断对应城市。
    {
        cout<<"Brasilia"<<endl;
    }
    else if(a==71)
    {
        cout<<"Salvador"<<endl;
    }
    else if(a==11)
    {
        cout<<"Sao Paulo"<<endl;
    }
    else if(a==21)
    {
        cout<<"Rio de Janeiro"<<endl;
    }
    else if(a==32)
    {
        cout<<"Juiz de Fora"<<endl;
    }
    else if(a==19)
    {
        cout<<"Campinas"<<endl;
    }
    else if(a==27)
    {
        cout<<"Vitoria"<<endl;
    }
    else if(a==31)
    {
        cout<<"Belo Horizonte"<<endl;
    }
    else
    {
        cout<<"DDD nao cadastrado"<<endl;
    }
}
// 总结：固定且数量较少的映射可以使用条件链，但必须保留默认分支。