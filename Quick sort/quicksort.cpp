#include<iostream>
using namespace std;
//select pivot element and left and right
/* o (n log n)- time complexity
divide and conquer
partioning
recursive function
best case =n log n
Average case= n log n
worst case =o(n)2  */
int part(int a[],int low, int high)
{
    // formula of insertion sort
    int pvt=a[low];
    int l=low+1;
    int r=high;
    int tmp;
    do{
        while(a[l]<pvt)
        {
            l++;
        }
        while(a[r]>pvt)
        {
            r--;
        }
        if(l<r)
        {
            tmp=a[r];
            a[r]=a[l];
            a[l]=tmp;
        }
    }
    while(l<r);
    tmp=a[low];
    a[low]=a[r];
    a[r]=tmp;
    return r;
}

void qs(int a[],int low, int high)
{
    if(low<high)
    {
        int pvt=part(a,low,high);
        qs(a,0,pvt-1);
        qs(a,pvt+1,high);
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
    int a[]={2,5,3,4,10,9,8};
    int s=sizeof(a)/sizeof(a[0]);
    print (a,s);
    qs (a,0,s-1);
    cout<<"\n After Quick sort\n";
    print(a,s);
}
