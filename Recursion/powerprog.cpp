#include<iostream>
using namespace std;
//power program
int pwrec(int b, int p)
{
    if(b==0)//base condition
    {
        return 0;
    }
    if(p==0)//base condition
    {
        return 1;
    }
    int c=b*pwrec(b,p-1);//recursion relationship
    return c;
}
int main()
{
 int b, p;
 cout<<"Enter Base\n";
 cin>>b;
 cout<<"Enter Power \n";
 cin>>p;
 cout<<"Result="<<pwrec(b,p);
}
