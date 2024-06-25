//
//Time complexity 
#include <iostream>
using namespace std;

int lowerBound(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start - end)/2;
    int ans = -1;

while (start <= end)
    {
        if(arr[mid] == key)
        {
            ans = arr[mid];
            end = mid -1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
    mid = (start + end)/2;
    }   
    return ans;
}
int main()
{
    int size,key;
    cout << "Enter the size of array: " << endl;
    cin >> size;
}