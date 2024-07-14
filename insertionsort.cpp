#include<iostream>
using namespace std;
//INSERTION SORT
int main()
{
    int s;
    cout<<"enter size of array\n";
    cin>>s;
    int a[s];
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter "<<s<<" value\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Data\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nAfter appling insertion sort\n";
}
