#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *nxt;
    node(int d)
    {
        data=d;
        nxt=NULL;
    }
};
void inserthead(node* &h, int d)
{
    node *tmp=new node(d);
    tmp->nxt=h;
    h=tmp;
}
int len(node* &h)
{
    int k=0;
    node *tmp=h;
    while(tmp!=NULL)
    {
        k++;
        tmp=tmp->nxt;
    }
    return k;
}
void show(node* &h)
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
    node *h=new node(6);
    inserthead(h,12);
    inserthead(h,55);
    inserthead(h,8);
    inserthead(h,4);
    show(h);
    cout<<len(h);
}
