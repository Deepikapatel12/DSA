#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int, 5>arr;
    cout<<"Enter 5 values\n";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    cout<<"Output is \n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"value at 0 indexing="<<arr.front()<<"\n";
    cout<<"value at n-1(last indexing) indexing="<<arr.back()<<"\n";
    array<int, 5>d{10,20,30,40,50};
    cout<<"output of second array is\n";
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<"\t";
    }
    arr.swap(d);
    cout<<"After Swapping output of first array\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"After Swapping output of second array\n";
 for (int i=0;i<d.size();i++)
 {
     cout<<d[i]<<"\t";
 }
d.fill(-100);
cout<<"\n";
for(int i=0;i<d.size();i++)
{
    cout<<d[i]<<"\t";
}
}
