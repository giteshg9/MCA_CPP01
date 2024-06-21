//problem statement: Given an integer array sorted in non-decreasing order,

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set1 = {1,1,2,2,2,3,3};

    for (int i :set1)
    {
        cout << i << " ";
    }
    cout << endl << "The size of set is: " << set1.size();
}

/*#include<iostream>
using namespace std;

int uniqueelements(int arr[], int size)
{
    int i=0;
    for(int j= i + 1; j<size; j++)
    {
        if(arr[i]!= arr[j])
        {
            i++;
            arr[i]= arr[j];
        }
    }
    return i +1;
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int k= uniqueelements(arr,7);
    for(int i=1; i<=k;i++)
    {
        cout<< i <<" ";
    }
}*/
