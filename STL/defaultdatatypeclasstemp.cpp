#include<iostream>
//iostream is also called a template class
//class based template m data type dena padta h
using namespace std;
template <class cybrom, class cybrom2=int>
class student
{
    cybrom a;
    cybrom b;
    public:student(cybrom x, cybrom2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Sum="<<a+b;

    }
};
int main()
{
    //class based template m data type dena padta h
    student<int>obj(5,4);
    cout<<sizeof(obj)<<"\n";
    obj.show();
}

