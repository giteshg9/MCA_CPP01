#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = "fuck ";
    str1.append(str3).append(str2); // Using append method
    // or
    //str1 = str1 + str3 + str2; // Using + operator
    
    cout << "Appended string: " << str1 << endl;
    return 0;
}