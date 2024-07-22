#include <iostream>
using namespace std;

int main()
{
    int term1 = 0;
    int term2 = 1;
    int nextTerm;
    int n;

    cout<<"Number of term: ";
    cin>>n;

    if(n<=2)
    {
        cout<<"Atleast ask 3 or more than 3 term!!";
        return 0;
    }

    cout<<term1<<" , "<<term2<<" , ";

    for (int i = 3; i < n; i++)
    {
        nextTerm = term1 + term2;
        //if(i != n ){cout<<", ";}
        cout<<nextTerm<<" , ";
        term1 = term2;
        term2 = nextTerm;
    }
    
}