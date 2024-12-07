#include<iostream>
using namespace std;
#include<vector>
#include<stack>
#include<algorithm>
int main()
{
    vector<int>v;
    stack<int>st;
    int x;
    st.push(4);
    st.push(3);
    st.push(-9);
    st.push(2);
    st.push(6);
    st.push(9);
    while(!st.empty())
    {
    x=st.top();
    st.pop();
    v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"min value="<<v[0];
    }
