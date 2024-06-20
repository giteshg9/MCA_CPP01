#include <iostream>
using namespace std;

void sort0and1(int arr[],int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        } 
    }
    
    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }

    for (int i = count; i < size; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[5] = {1,0,0,1,0};
    sort0and1(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << sort0and1 << endl;
    }
    
}