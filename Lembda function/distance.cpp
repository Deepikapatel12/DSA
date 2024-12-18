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
        lst.remove_if([](int a){return a>5;});
        for(auto k:lst)
        {
            cout<<k<<"\t";
        }
        cout<<"\n";
        cout<<"\n distance "<<distance(lst.begin(), lst.end());
         lst.clear();//to clear all the data to use this
    }
