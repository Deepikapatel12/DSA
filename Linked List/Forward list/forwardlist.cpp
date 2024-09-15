#include<iostream>
using namespace std;
#include<forward_list>
int main()
{
forward_list<int>d;
d.push_front(23);
d.push_front(2);
d.push_front(10);
d.push_front(12);
for(auto p:d)
{
    cout<<p<<"\n";
}
}
