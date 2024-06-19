#include <iostream>
using namespace std;

int main()
{
    int yare[5];
    int sum = 0;
    cout << "Enter the number : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> yare[i];
    }
    cout << "The number are: " << " ";

    for (int i = 0; i < 5; i++)
    {
        sum += yare[i];
    }
    cout << sum << endl;
}