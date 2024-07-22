#include<iostream>
using namespace std;
//power program
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    int c=n*fact(n-1);//recursion relationship
    return c;
}
int main()
{
 int n;
 cout<<"Enter Base\n";
 cin>>n;

 cout<<"Result="<<fact(n);
}
