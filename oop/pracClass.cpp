#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int rollno;

    void show()
    {
        cout << "Name of the student is : " << name << endl;
        cout << "Age of the student is : " << age << endl;
        cout << "Rollno. : " << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.name="Fish";
    s1.age = 5;
    s1.rollno = 442201;

    s1.show();
    return 0;
}