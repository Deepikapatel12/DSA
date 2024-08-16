#include<iostream>
using namespace std;
//namespace k andr  namespace multiple bna sakte h pr same name k na ho
//by default sabhi member public hote h
//namespace ka kbhi b object ni bnta ye public hota h class ka object bnta h ye private hoti h

namespace cybrom
{
    void cybfun()
    {
        cout<<"cybrom function\n";
    }
    class bhopal
    {
        int a,b;
        public:void input (int x, int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<"result="<<a+b;
        }
    };
    namespace cybrom2
    {
        void cybfun()
        {
            cout<<"cybrom2 function\n";
        }
    }
}
using namespace cybrom;
int main()
{
    cybfun();
    cybrom2::cybfun();
    bhopal obj;
    obj.input(40,50);
    obj.show();
    bhopal obj2;
    obj2.input(4,5);
    obj2.show();
}
