#include<iostream>
using namespace std;
#include<thread>
void evn(int s, int e)
{
    for(s;s<=e;s++)
    {
        if(s%2==0)
        {
            cout<<"Even No ="<<s<<"\n";
        }
    }
}
void odd(int s, int e)
{
    for(s;s<=e;s++)
    {
        if(s%2!=0)
        {
            cout<<"Odd No ="<<s<<"\n";
        }
    }
}
int main()
{
    thread t1(evn,1,200);
    thread t2(odd,1,200);
    t1.join();
    t2.join();
    cout<<"\nClosed";
}
