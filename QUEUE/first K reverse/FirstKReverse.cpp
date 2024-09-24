//first k revers
//write a program first K reverse
//jha tk k ki value di bha tk data reverse hona chaiye bki esatise print hina chaiye

#include<iostream>
using  namespace std;
#include<queue>
#include<stack>
void rev(queue<int>&q,int k)
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
     cout<<"\n"<<q.front()<<"\t";
        q.pop();

         int n=q.size();
      //   k==q;
    while(n--)
    {
        cout<<q.front()<<"\t";
        q.push(q.front());
        q.pop();
    }
    cout<<"\n"<<"After delete";
     while(!q.empty())
    {
        cout<<"\n"<<q.front()<<"\t";
        q.pop();
    }
}
