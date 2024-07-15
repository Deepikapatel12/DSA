#include<iostream>
using namespace std;
int main()
{
 int a[5]={5,6,8,4,1};
 int tmp;
 int c=0;
 int s=sizeof(a)/sizeof(a[0]);
 for(int i=0;i<s;i++)
 {
     cout<<a[i]<<"\n";
 }

 //apply bubble sort
 for(int i=0;i<s;i++)
 {
     for(int j=0;j<s-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             tmp=a[j];
             a[j]=a[j+1];
             a[j+1]=tmp;
             c++;
         }
     }

     if(c==0)
     {
         cout<<"Data is Already sorted\n";
         break;
     }
 }

 cout<<"After Bubble Sort\n";

 for(int i=0;i<s;i++)
 {
     cout<<a[i]<<"\n";
 }
 cout<<"\ncounter hit="<<c;

}
