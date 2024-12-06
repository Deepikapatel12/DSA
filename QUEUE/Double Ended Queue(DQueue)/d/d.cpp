#include<iostream>
using namespace std;
#include<queue>
#include<stack>
int main()
{
    deque<int>q;
    q.push_front(100);
    q.push_back(200);
    q.push_back(300);
    q.push_front(400);
    while(!q.empty())
    {
        cout<<q.back()<<"\t";
        q.pop_back();
    }
}
