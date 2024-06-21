//Set -> 1. unique elements - no two elements ina set can be equal
//2. immutable - we can add or remove elements from a set
//3. it arrenge all element in assinding or desinding order 
#include <iostream>
#include <set>
using namespace std;

int main()
{
    //set<int> set1 = {3,8,1,4,9};      for assinding
    set<int, greater<int>> set1 = {3,8,1,4,9,8};  // for decending

    set1.insert(20);
    //set1.erase(1); delete the value from the set
    //set1.clear(); delete all elements

    cout << set1.size();

    for(int i : set1)
    {
        cout << i << " ";
    }
}