#include<iostream>
using namespace std;
//Exception : Abnormal condition
//Exception Handling : Is used to avoid abnormal condition
int main()
{
int arr[2]={20,30};
int i;
try{
    cout<<"enter index\n";
    cin>>i;
if(i>1)
{
    throw i;
}
cout<<arr[i];

}
catch(int e)
{
    cout<<"Out of range \n";
}
cout<<"Done";
}

