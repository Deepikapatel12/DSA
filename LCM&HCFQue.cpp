#include<iostream>
using namespace std;
int main()
{
    //HCF normal program
    //And try in this In Recursion LCM and HCf both
    int a,b,x;
    cout<<"Enter Two Numbers\n";
    cin>>a>>b;
    x=a>b?a:b;
    while(1)
    {
        if(x%a==0 && x%b==0)
        {
            cout<<x;
            break;
        }
        x++;
    }
}
