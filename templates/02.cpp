//STl -> Standard Template Library - 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //int arr[5] = {4,1,7,3,2};
    vector<int> num = {1,2,3,4,};
    for(int item : num)
    {
        cout << item << " ";
    }
}