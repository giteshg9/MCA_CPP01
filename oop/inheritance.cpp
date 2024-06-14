#include <iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
        cout << "Eating....." << endl;
    }
    protected:
    void proctedMethod(){}

    private:
    void privateMethod(){}
};

class dog : public animal
{
    private:
    void bark()
    {
        
    }
};

int main()
{
    dog d1;
    d1.eat();

    return 0;
}