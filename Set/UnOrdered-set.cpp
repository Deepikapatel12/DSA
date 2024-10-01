#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
    //without sequence
   unordered_set<int>s;//ascending order
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

}

