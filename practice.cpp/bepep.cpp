#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>> a >> b >> c;

    if(a >= b && a >= c)
    {
        cout<<" Largest number is "<<a<<
        endl;
    }
    else if(b >= a && b >= c)
    {
        cout << "The largest number is "<<b<<
     endl;
    }
    else
    {
        cout <<"Largest number is "<<c<<
        endl;
    }
}
