#include<iostream>
using namespace std;
//Exception : Abnormal condition
//Exception Handling : Is used to avoid abnormal condition
int main()
{
int a,b;
cout<<"enter 2 numbers\n";
cin>>a>>b;
try{
if(b==0)
{
    throw b;
}
cout<<a/b;

}
catch(int e)
{
    cout<<"Denominator can not be Zero\n";
}
cout<<"Done";
}
