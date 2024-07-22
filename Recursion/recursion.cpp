#include<iostream>
using namespace std;
int front(int n)
{
    if(n==0)//base case
    {
        return 1;//always return value
    }
    //tail recursion
    cout<<n<<"\t";
    cout<<"\n";
    front(n-1);// recursion relationship
    //head recursion

    cout<<n<<"\t";
}
int main()
{
    front(5);
}
