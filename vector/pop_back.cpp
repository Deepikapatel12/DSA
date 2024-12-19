#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{12,3,4,5,6,7};
    vector<int>v2{12,13,44,35,26,77};
    v.pop_back();
    for(auto j:v)
    {
        cout<<j<<"\t";
    }
    cout<<"\n";
    vector<int>::iterator it=v.begin();
    cout<<*it;
    cout<<"\t";
    cout<<v[0];
    cout<<"\t";
    cout<<*(it+2);
    v.insert(it+2,100);
    v.erase(it+2);
    for(auto j:v)
    {
        cout<<j<<"\t";
    }
    v.swap(v2);
    cout<<"\n";
    sort(v.begin(),v.end());
    cout<<"\n After Ascending order sorting\n";
    for(auto j:v)
    {
        cout<<j<<"\t";
    }
    sort(v.rbegin(),v.rend());
    cout<<"\n After decending order sorting\n";
    for(auto j:v)
    {
        cout<<j<<"\t";
    }

}
