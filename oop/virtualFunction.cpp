//Pure virtual function
// why?
//if a function  dosen't
// A class that contains a 
#include <iostream>
using namespace std;

class A
{
    public:
    virtual void display() = 0;
};

class B : public A
{
    public:
    void display() override
    {
        cout << "From B" << endl;
    }

};

class C : public A
{
    public:
    
};

int main()
{
    Derived d1;
    Base *ptr = &d1;
    ptr->display();
}