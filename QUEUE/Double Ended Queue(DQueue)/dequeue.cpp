#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int>node;
    node.push_back(1);
    node.push_front(2);
    node.push_back(3);
    node.push_back(4);
    node.push_front(5);
    while(!node.empty())
    {
        cout<<node.back()<<"\t";
        node.pop_back();
    }
}
