
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    v[0]=100;
    v[1]=200;
    v[2]=300;
    v[3]=400;
    v[4]=500;
    v.push_back(10);
    v.push_back(3);
    v.push_back(45);
    v.push_back(54);
    v.push_back(23);
    v.push_back(99);
    cout<<v.size()<<"\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }


    const vector<int>a{5,6,7,8,9};
    const vector<int>b(5,6);
    for(auto )
}
