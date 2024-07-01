/*static memory
In this, size and location where variables will be stored is fixed during compile time. BUt the actual physical memory is only allocated by at runtime.

int *ptr = new arr[n];

delete []arr
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row,col;
    cin>>row>>col;

    int **arr = new int*[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[col];
    }
    // tacking input
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    
}