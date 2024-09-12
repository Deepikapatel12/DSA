#include<iostream>
using namespace std;
class node //Self Reference Class
{
   public: int data;
    node *nxt;
    public:node(int d)
    {
        data=d;
        nxt=NULL;
    }
};
void insrt(node* &h, int d)
{
    node *n=new node(d);
    if(h==NULL)
    {
        h=n;
        return;
    }
    node *tmp=h;
    while(tmp->nxt!=NULL)
    {
        tmp=tmp->nxt;
    }
    tmp->nxt=n;
}
void show(node* h)
{
    node *tmp=h;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"->";
        tmp=tmp->nxt;
    }
    cout<<"NULL"<<"\n";
}
int main()
{
    node *h=NULL;
    insrt(h,21);
    insrt(h,2);
    insrt(h,32);
    show(h);
}
