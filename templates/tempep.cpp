#include <iostream>    // this code ruined
using namespace std;

template <class T>
class Machine
{
    private:
    T num;

    public:
    Machine(T machine)
    {
        num = machine;
    }
    T getNum()
    {
        return num;
    }
};

template <typename T>
T add(T a,T b)
{
    return a + b;
}

int main()
{

}