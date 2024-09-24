#include<iostream>
using namespace std;
#include<queue>
int main()
{
   //with STL
   //without extra space no extra veriable
   //without deletion
   //space complexcity order of n
   //queue data retain
    queue<int>node;
    node.push(1);
    node.push(2);
    node.push(3);
    node.push(4);
    node.push(5);
   /* while(!node.empty())
    {
        cout<<node.front()<<"\t";
        node.pop();
    }*/
    int n=node.size();
    while(n--)
    {
        cout<<node.front()<<"\t";
        node.push(node.front());
        node.pop();
    }
    cout<<"\n"<<"After delete";
     while(!node.empty())
    {
        cout<<"\n"<<node.front()<<"\t";
        node.pop();
    }
}
