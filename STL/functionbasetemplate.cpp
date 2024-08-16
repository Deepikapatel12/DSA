#include<iostream>
using namespace std;
//iostream is also called a template class
//function based template m datatype ni dena padta
template <class tmpgrt>
tmpgrt value(tmpgrt a, tmpgrt b)
{
    return a+b;
}
int main()
{
    cout<<value(52.4,5.4);
}

