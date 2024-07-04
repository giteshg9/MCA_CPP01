#include  <iostream>
using namespace std;

int square(int x)
{
    return x*x;  
}

/*int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << square(i)<< endl;
    }
}
double circumferance(int r)
{
    return 2*3.14*r;
}

double area(int r)
{
    return 3.14*square(r);
}

int main()
{
    int r = 3;
    cout<<circumferance(r)<<" and "<<area(r)<<endl;
}*/
bool isEligibal(int age, int limit)
{
    if(age <= limit)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    cout << isEligibal(21,18);
}