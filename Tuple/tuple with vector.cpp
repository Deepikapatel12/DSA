#include<iostream>
#include<tuple>
#include<vector>
using namespace std;
int main()
{
    vector<tuple<int,string,int>>v1;
    int n,rno,age;
    string name;
    cout<<"How many records\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\n Enter Roll No ";
        cin>>rno;
        cout<<"\n Enter Name ";
        cin>>name;
        cout<<"\n Enter age \n";
        cin>>age;
        v1.push_back(make_tuple(rno,name,age));
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<get<0>(v1[i])<<"\t";
        cout<<get<1>(v1[i])<<"\t";
        cout<<get<2>(v1[i])<<"\n";
    }
}