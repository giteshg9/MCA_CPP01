#include <iostream>
using namespace std;

int main()
{
   int x = 5;
   int *ptr = &x;
   int **ptr1 = &ptr;

   int *ptrNull = NULL;

   cout << x << endl;     //5
   cout << ptr << endl;   //address of x
   cout << ptr1 << endl;  //address of ptr
   cout << ptrNull << endl;
}