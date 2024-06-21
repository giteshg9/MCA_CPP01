#include <iostream>
using namespace std;

string pairSum(int arr[],int size, int target)
{
    sort(arr[0], arr[size]);
    int i = 0;
    int j = size - 1;
    while(i<=j)
    {
        int sum;
        sum = arr[i]+vec[j];
        if(sum == target)return "Yes";
        else if(sum < target)
        {
            i++;
        }
    }
}
int main()
{

}