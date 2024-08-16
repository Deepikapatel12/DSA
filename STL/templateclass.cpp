#include<iostream>
using namespace std;
template<class cybrom>//<>it is a place holder and always write class
//isme koi b data type use ni krte
//koi b primitive datatype ka use ni hota
cybrom grt(cybrom a, cybrom b)
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
    cout<<grt(23,4)<<"\n";
    cout<<grt(45.3,98.4)<<"\n";
    cout<<grt('d','h');
}
