//recursion
//-> A function calls itself directly or indirectly

#include <iostream>
using namespace std;

/*int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}

int main()
{
    int a;
    cin >> a;
    cout << fact(a);
    return 0;
}*/

int power(int a,int times)
{
    if(times==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,times-1);
    }
}
int main()
{
    int a,times;
    cin >> a >> times;
    cout << power(a,times);
    return 0;
}