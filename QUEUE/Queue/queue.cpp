#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int>node;
    node.push(12);
    node.push(52);
    node.push(67);
    node.push(39);
    node.push(30);
    while(!node.empty())
    {
        cout<<node.front()<<"\t";
        node.pop();
    }
}
