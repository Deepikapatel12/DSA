#include<iostream>
using namespace std;
#include<vector>
void test(vector<int>vs)
{
    for(auto p:vs)
    {
        if(p%2==0)
        {
            cout<<p<<"\t";
        }
    }
}
int main()
{
    vector<int>v{10,4,35,65,7,4};
    test(v);
}
