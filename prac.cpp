#include <iostream>
using namespace std;

int fac(int n)
{
    int a = 1;
    for (int i = 1; i < n; i++)
    {
        a = a*i;
    }
    return a;
}

int nCr(int n, int r)
{
    int num = fac(n);
    int dem = fac(r)*fac(n-r);
    return num/dem;
}

int main()
{
    int factorial = fac(6);
    int formula = nCr(6,5);
    cout << factorial << endl;
    cout << formula << endl;
}