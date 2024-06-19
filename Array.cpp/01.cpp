#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2,3,4,5,9};

    for(int item : arr)
    {
        //cout << item << endl;       each element in other line
        cout << item << " ";
    }
    cout << endl;
    cout << arr[0];
}