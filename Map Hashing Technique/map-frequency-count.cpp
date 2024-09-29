#include<iostream>
using namespace std;
#include<map>
int main()
{
//isme data automatically ascending order m arrange ho jata h
    map<string,int>mp;
    int r;
    string s;
    cout<<"enter how many records\n";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
    cout<<"enter name\n";
    cin>>s;
    mp[s]++;
    }
    for(auto p:mp)
    {
    cout<<p.first<<"="<<p.second<<"\n";
    }
}
