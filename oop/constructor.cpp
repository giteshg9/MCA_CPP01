#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;

    person()
    {
        cout << "person ha been initilized" << endl;
    }

    person(int age)
    {
        a = age;
        
    }
};

int main()
{
    return 0;
}