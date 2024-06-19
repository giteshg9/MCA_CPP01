#include <iostream>
using namespace std;

void printArr(int aare[],int size)
{
    for (int i = 0; i < 5; i++)
    {
        cout << aare[i];
    }
    
}

int getMin(int aare[],int size)
{
    int min = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(aare[i] < min)
        {
            min = aare[i];
        }
    }
    return min;
}

int main()
{
    int aare[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> aare[i];
    }
    printArr(aare,5);
    getMin(aare,5); 
}