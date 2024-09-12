#include<iostream>
using namespace std;
#include<stack>
int main()
{
stack<int>obj;
cout<<"size="<<obj.size()<<"\n";
obj.push(10);
obj.push(3);
obj.push(14);

/*while(!obj.empty())
{
    cout<<obj.top()<<"\n";
    obj.pop();
}*/
cout<<"size="<<obj.size()<<"\n";
cout<<obj.top()<<"\n";
obj.pop();
cout<<obj.top();


}
