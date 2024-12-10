#include<iostream>
using namespace std;
class node
{
    public:int data;
    class node *l ;
    class node *r;
    public:node(int a)
    {
        data=a;
        l=NULL;
        r=NULL;
    }
};
int main()
{
    node *root=new node(12);
    root->l=new node(30);
    root->r=new node(6);
    cout<<"pre-order tree="<<root->data<<"->"<<root->l->data<<root->r->data<<"->"  <<"\n";
    cout<<"In-order tree="<<root->data<<"->"<<root->data<<"->"<<root->r->data<<"\n";
    cout<<"post-order tree="<<root->data<<"->"<<root->r->data<<"->"<<root->data<<"\n";

}
