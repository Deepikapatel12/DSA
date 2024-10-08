#include<iostream>
#include<map>
using namespace std;
void ana(string t1, string t2)
{
    map<char,int>mp;
    for(int i=0;i<t1.length();i++)
    {
        mp[t1[i]]++;
    }
    for(int j=0;j<t2.length();j++)
    {
        mp[t2[j]]--;
    }
    bool f=false;
     for(auto p:mp)
     {
        if(p.second!=0)
        {
            f=true;
            break;
        }
     }
     if(f==true)
     {
         cout<<"Not Anagram";
     }
     else{
        cout<<"Anagram";
     }
}
int main()
{
    string s1="tea";
    string s2="eat";
  ana(s1,s2);

}
