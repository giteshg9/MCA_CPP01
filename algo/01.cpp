//Binary secarch
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

   
    while (start<=end)
    {
        if(arr[mid] == key)
        {
        return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid-1;
        }
        //mid = (start + end)/2;
    }

    return -1;
    //cout << "nahi mila bc!";
    
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key = 10;
    int xx = binarySearch(arr,9,key);
    cout << "Key is " << xx << endl;
}