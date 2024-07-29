#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,3,45,6,7,4};
    int s=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<s;i++)
 {
  cout<<arr[i]<<"\t";
 }
 cout<<"\nAfter Appling insertion sort\n";



    cout<<"\n";
    for(int c=0;c<s;c++)
    {
    int chotu=c;
    for(int d=c+1;d<s;d++)
    {
        chotu=d;
    }

    if(chotu!=c)
    {
        int tmp=arr[chotu];
        arr[chotu]=arr[c];
        arr[c]=tmp;
    }
    }
    cout<<"After Selection sort\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
