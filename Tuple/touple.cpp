#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<int, string, int>t{101,"Amit",21};
    cout<<"Roll No= "<<get<0>(t)<<"\n";
    cout<<"Name= "<<get<1>(t)<<"\n";
    cout<<"Age= "<<get<2>(t)<<"\n";
}
