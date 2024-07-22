#include<iostream>
using namespace std;
int fib(int b)
{
    if(b==0)//base case

    {
        return 0;
    }
    if(b==1)//base condition
    {
        return 1;
    }
    int c=fib(b-1)+fib(b-2);// recursion relationship
    return c;
}
int main()
{
    int b;
    cout<<"Enter Term of Fibbonic Series= "<<"\n";
    cin>>b;
    cout<<"Result is ="<<fib(b);
}
