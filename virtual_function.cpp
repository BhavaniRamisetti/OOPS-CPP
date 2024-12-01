#include <iostream>
using namespace std;
class base
{
    public:
    virtual void print()
    {
        cout<<"print base class"<<endl;
    }
    void show()
    {
        cout<<"show base class";
    }
};
class derived:public base
{
    public:
    void print()
    {
        cout<<"print derived class"<<endl;
    }
    void show()
    {
        cout<<"show derived class";
    }
};
int main()
{
    base *ptr;
    derived d;
    ptr=&d;
    ptr->print();//virtual - late binding
    ptr->show();//non - virtual early binding
}