#include<iostream>
using namespace std;

/*class classroom
{
    string name;//data members
    int age;
    int rollno;
};*/

class calculation
{
    public:
    double length;
    double breadth;
    double height;

    double calArea()
    {
        return length * breadth;
    }
    double calFormula()
    {
        return length*breadth*height;
    }
};

int main()
{
    calculation c1;
    c1.breadth=5;
    c1.length= 6;
    c1.height= 8;
    cout << c1 << calArea();
}