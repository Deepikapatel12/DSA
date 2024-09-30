#include<iostream>
using namespace std;
#include<set>
int main()
{
   set<int>s;//ascending order
   // set<int,greater<int>>s;//descending order
    s.insert(101);
    s.insert(109);
    s.insert(105);
    s.insert(103);
    s.insert(107);
    s.insert(102);
    s.insert(106);

    for(auto a:s)
    {
        cout<<a<<"\n";
    }
    s.erase(107);
    cout<<"\nAfter Erase\n";
    for(auto a:s)
    {
        cout<<a<<"\n";
    }

    cout<<"\n"<<"arrange in ascending order\n";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";

    cout<<"\n"<<"Arrange in Descending order\n";
     for(auto it=s.rbegin();it!=s.rend();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";
    cout<<"\n Upper Bound of = "<<*s.upper_bound(109);//upper bound just next node
     cout<<"\n";
    cout<<"\n Lower Bound of = "<<*s.lower_bound(101);//Lower bound return same position
}
