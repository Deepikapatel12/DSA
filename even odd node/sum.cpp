#include<iostream>
using namespace std;
class node
{

};
void result(node* &h)
{
    int even=0;
    int odd=0;
    node *tmp=h;
    while(tmp!=NULL)
    {
        if(tmp->data%2==0){

            even=even+tmp->data;

        }
        else{
            odd=odd+tmp->data;
        }
        tmp=tmp->nxt;
    }
    cout<<"sum of even="<<even<<"\n";
    cout<<"odd="<<odd<<"\n";
}
int main()
{

}
