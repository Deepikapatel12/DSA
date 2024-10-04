#include<iostream>
using namespace std;
int main()
{
    //brute force algo combination of all possible ways
    int arr[]={1,2,4,5,6};
    int tmp;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
    cout<<arr[i]<<"\t";
    }
    cout<<"\nAfter Applying Bubble Sort\n";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            if(arr[i]>arr[j+1])
            {
                tmp=arr[j+1];

                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
