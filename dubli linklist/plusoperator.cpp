#include<iostream>
#include<vector>
#include<forward_list>
#include<algorithm>
#include<list>
using namespace std;
   int main()
   {
       list<int>lst{4,7,65,95,4,3,7,8};
       lst.push_front(-12);
       lst.push_back(13);
       lst.pop_front();
       lst.pop_back();
       vector<int>v{1,2,3,4};
       cout<<"size ="<<lst.size()<<"\n";
       list<int>::iterator it=lst.begin();
       while(it!=lst.end())
       {
           cout<<*it<<"\t";
           it++;
       }

   }
