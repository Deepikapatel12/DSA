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
void show(node* &h)
{
    node *tmp=h;
    while(tmp!NULL)
    {

    }
}
