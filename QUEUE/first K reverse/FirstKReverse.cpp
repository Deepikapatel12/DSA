//first k revers
//write a program first K reverse
//jha tk k ki value di bha tk data reverse hona chaiye bki esatise print hina chaiye

#include<iostream>
using  namespace std;
#include<queue>
#include<stack>
void firstk(queue<int>&q,int k)
{
     stack<int>s;
   while(k--)
    {
        s.push(q.front());
        q.pop();
    }
     int n=q.size();
       while (!s.empty()) {
   // cout << s.top() << " ";
        q.push(s.top());
        s.pop();
    }
     while(n--)
    {
        q.push(q.front());
        q.pop();
    }
      while(!q.empty())
    {
        cout<<q.front()<<"\t";
      //  q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    int k=2;
    firstk(q,k);


}
