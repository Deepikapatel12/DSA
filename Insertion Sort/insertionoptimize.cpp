#include<iostream>
using namespace std;
int main()
{
 int a[5]={6,3,2,4,1};
 int s=sizeof(a)/sizeof(a[0]);
 for(int c=0;c<s;c++)
 {
  cout<<a[c]<<"\t";
 }
 cout<<"\nAfter Appling insertion sort\n";
 for(int i=1;i<s;i++)
 {
   int mini=i;
   while(mini>0)
   {
       if(mini>0 && a[mini]<a[mini-1])
       {
           int tmp=a[mini-1];
           a[mini-1]=a[mini];
           a[mini]=tmp;
       }
       mini--;
   }
 }
 for(int i=0;i<s;i++)
 {
     cout<<a[i]<<"\t";
 }
}
