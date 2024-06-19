#include <iostream>
using namespace std;

void printArr(int yare[], int size)
{
    cout << "The number are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << yare[i];
    }
    
}

int main()
{
    int yare[5];
    cout << "Enter : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> yare[i];
    }
    printArr(yare,5);
}