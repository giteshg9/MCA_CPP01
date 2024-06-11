#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int total = (sum/300)*100;

    if(total >= 60)
    {
        cout << "pass" << total <<
        endl;
    }
    else if(sum<60)
    {
        cout << "fail" << total <<
        endl;
    }
    else if(sum >= 80)
    {
        cout << "Pass" << total <<
        endl;
    }
}