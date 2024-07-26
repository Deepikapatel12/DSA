#include<iostream>
using namespacestd;
void mrg(int a[], int low, int mid, int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[5];
    while(i<=mid; && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
void qs(int a[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        qs(a,low,mid);
        qs(a,mid+1,high);
        mrg(a,low,mid,high);
    }
}
void print(int a[], int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
     int a[]={4,2,3,1,5};
     int s=sizeof(a)/sizeof(a[0]);
     print(a,s);
     qs(a,0,s-1);
     cout<<"\n After Merge Sort\n";
     print(a,s);
}
