#include<iostream>
using namespace std;
template<class cybrom, class bhopal>//<>it is a place holder and always write class
//isme koi b data type use ni krte
//koi b primitive datatype ka use ni hota
//for different parameter
cybrom grt(cybrom a, bhopal b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    cout<<grt(23,4.5)<<"\n";
}
