/*#include <iostream>
using namespace std;



int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    
}*/
#include <iostream>
using namespace std;

/*int main()
{
    int xx;
    cin >> xx;
    if(xx < 0)
    {
        cout << xx << " The number is negative!" << endl;
    }
    else
    {
        cout<< xx << " The number is posative..!" << endl;
    }
}
int main()
{
    int a,b;

    cout << "Enter number 'a' :";
    cin >> a;
    cout << "Enter number 'b' :";
    cin >> b;

    if(a == b)
    {
        cout << "'a' is equal to 'b'." << endl;
    }  
    else if(a < b)
    {
        cout << "'a' is less than 'b'." << endl;
    }
    else
    {
        cout << "'a' is greater than 'b'." << endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int i = 1;

    while (i<=n)
    {
        cout << i <<+" ,";
        i++;
    }
    
}*/
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        i = i + 2;      // sum of all even number
    }
    cout << "The value of sum is : " << sum;
}