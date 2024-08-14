#include<iostream>
using namespace std;
//array is called Sequence Cointaner
#include<array>
int main()
{
array<int, 4>cyb{32,5,4,3};
for(int i=0;i<4;i++)
{
    cout<<cyb.at(i)<<"\n";
}
cout<<"Size = "<<cyb.size()<<"\n";
cyb.fill(40);
cout<<"After Filling the data\n";
for(int i=0; i<4; i++)
{
    cout<<cyb.at(i)<<"\n";
}
array<int,4>arr2{11,20,3,14};
cyb.swap(arr2);
for(int i=0; i<4;i++)
{
    cout<<"cyb = "<<cyb.at(i)<<"\n";
}
for(int i=0; i<4;i++)
{
    cout<<"arr2 ="<<arr2.at(i)<<"\n";
}
cout<<"\n";
cout<<"front ="<<cyb.front()<<"\n";
cout<<"Last ="<<cyb.back()<<"\n";
array<int, 5>ap{3,2,4,1,5};
/*for(auto v:ap)
{
    cout<<v<<"\n";
}
for(auto &v:ap)
{
    cout<<v<<"\n";
}*/
for(auto &v:ap)
{
    cout<<++v<<"\n";
}
cout<<"Latest value of Array \n";
for(auto v:ap)
{
    cout<<v<<"\n";
}

}
