// 思路：按照脊椎、类别和食性三层特征建立决策树，逐级确定动物名称。
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first,second,third;
    cin>>first>>second>>third;
    if(first=="vertebrate") // 先用最高层特征把动物分为脊椎和无脊椎两大类。
    {
        if(second=="bird")
        {
            if(third=="carnivore")
            {
                cout<<"eagle"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"dove"<<endl;
            }
        }
        else if(second=="mammal")
        {
            if(third=="omnivore")
            {
                cout<<"man"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"cow"<<endl;
            }
        }
    }
    else if(first=="invertebrate")
    {
        if(second=="insect")
        {
            if(third=="hematophagous")
            {
                cout<<"flea"<<endl;
            }
            else if(third=="herbivore")
            {
                cout<<"caterpillar"<<endl;
            }
        }
        else if(second=="annelid")
        {
            if(third=="omnivore")
            {
                cout<<"earthworm"<<endl;
            }
            else if(third=="hematophagous")
            {
                cout<<"leech"<<endl;
            }
        }
    }
}
// 总结：多级分类题应按题目给出的层次逐步缩小范围，避免条件交叉。