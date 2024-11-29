//pair is a class template which is having two parameters and we can insert the value with the help of make_pair function
//we can access the first element by using first keyword along with object name and second element will be accesses by second keyword along with object
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    pair<int, string>p;
    p=make_pair(110,"Ravi");
     cout<<p.first<<"\t";
    cout<<p.second;
    //second type
    cout<<"\n"<<"\n";
     pair<int, string>q{100,"Kavi"};
    cout<<q.first<<"\t";
    cout<<q.second;
}
