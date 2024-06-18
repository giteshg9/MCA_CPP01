#include <iostream>
using namespace std;

class Base 
{
    public:
    virtual void display()         // a virtual function must be defined in the base class , even though it is not used.
    {
        cout << "From Base" << endl;
    }
};

class Derived : public Base
{
    public:
    void display() override
    {
        cout << "From derived" << endl;
    }

};

int main()
{
    Derived d1;
    Base *ptr = &d1;
    ptr->display();
}