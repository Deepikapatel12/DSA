#include<iostream>
using namespace std;
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

int main()
{
   cybrom::bhopal obj;
    obj.input(40,50);
    obj.show();
    cybrom::bhopal obj2;
    obj2.input(4,5);
    obj2.show();
}
