#include <iostream>
using namespace std;

class count
{
    private:
    int values;
    public:
    count()
    {
        values = 5;
    }
    void operator ++()
    {
        values += 10;
    }
    void display(){
        cout << "Count : " << values << endl;
    }
};

int main()
{
    count c1;
    c1.display();
    ++c1;
    c1.display();
}