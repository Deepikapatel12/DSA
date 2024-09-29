#include<iostream>
using namespace std;
#include<map>
int main()
{

    //isme data automatically ascending order m arrange ho jata h
    map<int, string>mp;//key unique hona chaiye int  m jo b value dge bo unique rhte h besi he same value dubara ni de sakte noi to data overrite ho jata h key bo he rhygi
    mp.insert({101, "amit"});//first type to insert data
    mp.insert({103, "sumit"});
    mp.insert({108, "ravi"});
    mp.insert({105, "vinay"});
    mp.insert({107, "sohan"});
    mp.insert(make_pair(106, "vikki"));//second type to insert data
    mp[108]="honey";//Third type to insert data//insert
    mp[103]="rini";//u[pdate key reuse to key bo he rhygi data overite ho jyga
    mp[603];//data null authyga
      for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";//p.first p.second keyword first int m jo data h use get krne k liye second string m jo h use get krne k liye
    }


    auto p=mp.find(109);
    if(p!=mp.end())
    {
        mp.erase(p);
        cout<<"record deleted";

    }
    else
    {
        cout<<"Record Not Found";
    }
    cout<<"key= "<<mp.size()<<"\n";
    cout<<"max value= "<<mp.max_size()<<"\n";

    cout<<"================================================\n";
    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";//p.first p.second keyword first int m jo data h use get krne k liye second string m jo h use get krne k liye
    }

    cout<<"=====================================================================\n";
    mp.clear();

    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";//p.first p.second keyword first int m jo data h use get krne k liye second string m jo h use get krne k liye
    }
}
