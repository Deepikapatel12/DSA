#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{10,20,30};
    cout<<"Total length of vector="<<v.size()<<"\n";
    cout<<"max value of vector="<<v.max_size()<<"\n";
    for(auto a:v) //this is called range function // it is used to display the data (such as for loop) one by one isme data type ki dependency ni hoti auto keyword se datatype automatic detect kr leta h

    {
        cout<<a<<"\n";
    }
    vector<int>b;
    b.push_back(10);
    cout<<"size="<<b.size();
    cout<<"\ncapacity"<<b.capacity()<<"\n";
    vector<int>c;
    int s,t;
    cout<<"enter how many records\n";
    cin>>s;
    cout<<"enter "<<s<<"elements\n";
    for(int i=0;i<s;i++)
    {
        cin>>t;
        c.push_back(t);
    }

}
