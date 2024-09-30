#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>>
int main()
{
    //It  Allows Duplicate value
    //and value arrange in sorted order
    multimap<int,string>umap;
    umap.insert({101,"anil"});
    umap.insert({101,"sunil"});
    umap.insert({106,"tina"});
    umap.insert({104,"anu"});
    umap.insert({104,"anu"});
     umap.insert({104,"jhdgfyujers"});
    umap.insert({154,"anu"});
    for(auto a: umap)
    {
        cout<<a.first<<":"<<a.second<<"\n";
    }
    cout<<umap.size()<<"\n";
    cout<<"max value ="<<umap.max_size();
    umap.erase(104);//delete all records contain 101(all records deleted )
    umap.erase(umap.find(101));// only single record will be deleted(first record delet only)
    cout<<"\n"<<"After Delet data"<<"\n";
     for(auto a: umap)
    {
        cout<<a.first<<":"<<a.second<<"\n";
    }
}

