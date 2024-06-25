//incomplit
#include <iostream>
using namespace std;

void selectionSort( int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                int minIndex = j;
            }
        }
        
        swap(arr[minIndex],arr[i]);
    }
    
}

/*int main()
{
    int arr[] = {2,5,498,4,6,7};
    int x = selectionSort(arr,6);
    cout << x << endl;
}*/
int main()
{
    int arr[] = {2, 5, 498, 4, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

