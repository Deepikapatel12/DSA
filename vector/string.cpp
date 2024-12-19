#include<iostream>
using namespace std;
#include<string>
int main()
{
    string c;
    cout<<"memory of string"<<sizeof(c)<<"\n";
    cout<<"enter your name\n";
    //getline function se space b store ho jati h space ko b lene k liye use krte h
    getline(cin, c);
    cout<<"\n your name="<<c<<"\n";
    //push_back m last m character add krne ka km krta h
    c.push_back('k');
    cout<<"string="<<c<<"\n";
    //pop_back last ka character delet ya hatane ka km krta h
    c.pop_back();
    cout<<"now string="<<c;
}
