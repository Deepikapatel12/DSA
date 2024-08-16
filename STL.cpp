#include<iostream>
using namespace std;
void sum(int a, int b)
{
 cout<<"int="<<a+b;
}
void sum(double x, double y)
{
    cout<<"\n";
    cout<<"double="<<x+y;
}
void sum (char a, char b)
{
    if(a>b)
    {
        cout<<"\n";
        cout<<a<<"is large";
    }
    else{
            cout<<"\n";
        cout<<b<<"is large";
    }
}
int main()
{
    sum(3,5);
    sum(2.4,5.6);
    sum('a','k');
}
