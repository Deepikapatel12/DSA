#include<iostream>
#include<tuple>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>list1{10,3,7,65,3,3};
    for(auto p:list1)
    {
        cout<<p<<"\t";
    }
    list1.push_front(200);
    list1.push_front(300);//to add data in front
    list1.pop_front();// delet the front data
    cout<<"\n";
    for(auto p:list1)
    {
        cout<<p<<"\t";
    }
    list1.sort();
    cout<<"\n";
     for(auto p:list1)
    {
        cout<<p<<"\t";
    }
}
