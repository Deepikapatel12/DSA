#include<iostream>
using namespace std;
#include<vector>
class node
{
    public: int data;

        node *nxt;
        public: node(int d)
        {
            data= d;
            nxt=NULL;
        }
    };
    class que
    {
        public: node *frnt;
        node *rear;
        public:que()
        {
            frnt=NULL;
            rear= NULL;
        }
        void pus (int v)
        {
            node *n= new node(v);
            if(frnt==NULL)
            {
                frnt=n;
                rear=n;
                return;
            }
            rear->nxt=n;
            rear=n;
        }
        void pop()
        {
            if(frnt==NULL)
            {
                    cout<<"queue underflow";
            }
            node *del=frnt;
            frnt=frnt->nxt;
            delete del;
        }
        int peek()
        {
            if(frnt==NULL)
            {
                cout<<"NO DAta In Queue";
                return 0;
            }
            return frnt->data;
        }
        bool empt()
        {
            if(frnt==NULL)
            {
                return true;
            }
            return false;
        }
    };
    int main()
    {
        que q;
        q.pus(23);
        q.pus(45);
        q.pus(16);
        q.pus(7);
        q.pus(58);
        cout<<"Top element="<<q.peek()<<"\n";
        cout<<"Is empty="<<q.empt()<<"\n";
        q.pop();
        cout<<"After delet top element, next top element is=";
        cout<<"List of Queue \n";
        while(!q.empt())
        {
            cout<<q.peek()<<"\n";
            q.pop();
        }
        cout<<"Is Queue empty="<<q.empt()<<"\n";
        vector<int>v{100,300,200,400,500};
        que qn;
        for(auto p:v)
        {
            qn.pus(p);
        }
        cout<<"\n Data of vector in Queue\n";
        while(!qn.empt())
        {
            cout<<qn.peek()<<"\n";
            qn.pop();
        }
        cout<<"\n Is queue empty="<<qn.empt()<<"\n";
        cout<<"\n Data of vector\n";
        for(auto p:v)
        {
            cout<<p<<"\t";
        }
    }


