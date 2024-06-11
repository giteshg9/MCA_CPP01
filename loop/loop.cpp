#include <iostream>
using namespace std;

/*int main()
{
    for(int i = 0; i <= 10; i++)
    {
        cout<< i << endl;
    }
}*/
int main(){
int a,sum;
sum = 0;
cout <<"Enter the number ";
cin >> a;

for (int i = 1; i <=a;i++)
{
    sum = sum+1;
}
cout<<"The sum is "<< sum;
}