//vector is a dynamic array
//{}dynamic
//()static
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>p;
    cout<<p.size();
    cout<<"\n";
    vector<int>q{1,2,3,4,4};
    cout<<q.size();
    cout<<"\n";
    //1st is size(block) and 2nd value is value to fill all block by the given value
    vector<int>k(5,90);
     for(auto j:k)
    {
        cout<<j<<"\n";
    }
    vector<int>k2(5);
    for(auto j:k2)
    {
        cout<<j <<"\n";
    }
}
