#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,string>>v;
    int t;
    int rollno;
    string name;
    cout<<"enter how many records\n";
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"enter rollno\n";
        cin>>rollno;
        cout<<"enter name\n";
        cin>>name;
        v.push_back({rollno, name});
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"\t"<<v[i].second<<"\n";
    }
}
