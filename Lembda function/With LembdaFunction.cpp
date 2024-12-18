#include<iostream>
#include<vector>
#include<forward_list>
#include<algorithm>
using namespace std;
    //function argument function 3rd argument is called argument function
    int cmp(int a, int b)
    {
        return a>b;
    }
    int main()
    {
        forward_list<int>lst{4,21,5,67,8,57,3};
        vector<int>v{4,5,34,56,5,34,3};
        sort(v.begin(),v.end(),cmp);
        for(auto p:v)
        {
            cout<<p<<"\t";
        }
    }
