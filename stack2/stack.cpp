#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(21);
    s.push(3);
    s.push(5);
    s.push(4);
    if(s.empty())
    {
        cout<<"\n It is Empty \n";
    }
    else
    {
        cout<<"\n It is Not Empty \n";
    }
    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();
    }
    if(s.empty())
    {
        cout<<"\n It is Empty \n";
    }
    else
    {
        cout<<"\n It is Not Empty \n";
    }
}
