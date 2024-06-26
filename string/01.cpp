//String -> string is a collection of characters.
//2 type

#include <iostream>
using namespace std;

int getLength(char item[])
{
    int count = 0;
    for(int i = 0; item[i] != '\0'; i++)
    {
        count++;
    }
}
int main()
{
    //char str[] = "Hello";
    //char str[] = {'H', 'e','l','l','o'}; 

    char str[100];
    cout << "Enter your name : ";
    cin.getline(str, 100);

    cout << str;

    cout << "You entered: " << str << endl;
}

