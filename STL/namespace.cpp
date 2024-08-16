#include<iostream>
using namespace std;
// namespace iscollection of identifires
namespace cybrom
{
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
            cout<<"result="<<a+b<<"\n";
        }
    };
}
using namespace cybrom;
int main()
{
    bhopal obj;
    obj.input(40,50);
    obj.show();
    bhopal obj2;
    obj2.input(4,5);
    obj2.show();
}
