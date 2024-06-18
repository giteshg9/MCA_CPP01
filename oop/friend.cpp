#include <iostream> //11
using namespace std;

class A
{
    private:
    int numA;

    friend class B;
    public:
    A()
    {
        numA = 5;
    }
};

class B
{
    private:
    int numB;
    public:
    B()
    {
        
    }
};

int main()
{

}