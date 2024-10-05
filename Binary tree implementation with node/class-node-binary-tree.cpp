#include<iostream>
using namespace std;
class node
{
    public:int data;
        node *left;
        node *right;
        public:node(int d)
        {
            data=d;
            left=NULL;
            right=NULL;
        }
};
int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<<"\n Pre-Order\n";
    cout<<root->data<<"->"<<root->left->data<<"->"<<root->right->data;
    cout<<"\n In-Order\n";
    cout<<root->left->data<<"->"<<root->data<<"->"<<root->right->data;
    cout<<"\nPost-Order\n";
    cout<<root->left->data<<"->"<<root->right->data<<"->"<<root->data;
}
