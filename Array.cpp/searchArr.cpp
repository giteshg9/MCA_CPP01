#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)return true;   
    }
    
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 3
    ;
    bool found = linearSearch(arr,5,key);
    if (found)
    {
        cout << key << " Found " << endl;
    }
    else
    {
        cout << key <<  " Not found" << endl;
    }
    
}