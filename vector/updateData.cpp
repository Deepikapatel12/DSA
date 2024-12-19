#include<iostream>
using namespace std;
#include<vector>
vector<int>test(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        //v[i]++;//second type
        v[i]=v[i]+1;
        cout<<v[i]<<"\t";
    }
    return v;
}
int main()
{
    vector<int>v{3,2,4,7,1,8};
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    test(v);
    cout<<"\n After Calling Function\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}
