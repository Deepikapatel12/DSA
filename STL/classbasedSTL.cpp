#include<iostream>
//iostream is also called a template class
//class based template m data type dena padta h
using namespace std;
template <class cybrom>
class student
{
    cybrom a,b;
    public:student(cybrom x, cybrom y)
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
    obj.show();
}

