#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>st;
    int mn=INT_MAX;
    st.push(30);
    st.push(2);
    st.push(5);
    st.push(32);
    st.push(11);
    while(!st.empty())
    {
        if(mn>st.top())
        {
            mn=st.top();
        }
        st.pop();
    }
    cout<<"Minimum value ="<<mn;
}
