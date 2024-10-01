#include<iostream>
using namespace std;
#include<map>
#include<vector>
int main()
{
    vector<int>v{10,3,2,4,5};
    map<int, int>mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]=i;
    }
    for(auto p:mp)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
}
