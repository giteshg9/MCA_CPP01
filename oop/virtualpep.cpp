#include <iostream>
using namespace std;

class employee
{
    public:
    int Salary;
    virtual void salary() = 0;
};

class fullTime : public employee
{
    public:
    fullTime(){}
    fullTime(int salary)
    {
        this->salary = salary;
    }
    void salary() override
    {
        cout << "from the salary" << endl;
    }
};

int main()
{

}