//print the queue in reverse order
//stack last in first out
#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void reverseque(queue<int>&q)
    {
        stack<int>s;
        while (!q.empty())
            {
        s.push(q.front());
        q.pop();
    }
     while (!s.empty()) {
    cout << s.top() << " ";
        q.push(s.top());
        s.pop();
    }
    }

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverseque(q);
    cout<<q.size();
}
