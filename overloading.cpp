#include <iostream>
using namespace std;

int func(float a,float b)
{
    return a+b;
}

int func(int a,int b, int c)
{
    return a+b+c;
}

int main()
{
    int addf = func(5.3,8.6);
    int addi = func(5,6,7); 
    cout << addf << endl;
    cout << addi << endl;

    
}