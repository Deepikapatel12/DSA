#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    //It dosent Allow Duplicate value
    unordered_map<int,string>umap;
    umap.insert({101,"anil"});
    umap.insert({109,"sunil"});
    umap.insert({106,"tina"});
    umap.insert({104,"anu"});
    for(auto a: umap)
    {
        cout<<a.first<<":"<<a.second<<"\n";
    }
    cout<<umap.size()<<"\n";
    cout<<umap.max_size();
    umap.erase(109);
    cout<<"\n";
     for(auto a: umap)
    {
        cout<<a.first<<":"<<a.second<<"\n";
    }
}
