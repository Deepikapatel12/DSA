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
    for(int i=1;i<n;i++)
    {
        int mini=i;
        while(mini>0)
        {
            if(mini<n && a[mini]<a[mini-1])
            {
                int t=a[mini];
                a[mini]=a[mini-1];
                a[mini-1]=t;
            }
            mini--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

