#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first,second,third;
    cin>>first>>second>>third;
    if(first=="vertebrate")
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
            else if(third=="heratophagous")
            {
                cout<<"leech"<<endl;
            }
        }
    }
}