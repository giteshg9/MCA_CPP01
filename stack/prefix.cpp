#include <iostream>
using namespace std;

bool iDigit(char ch)
int prefixEval(string s)
{
    stack<int> st;
    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int oprator1 = st.top();
            st.pop();
            int oprator2 = st.top();
            st.pop();

            switch(s[i])
            
                case '+'
        }
    }
    
}
int main()
{

}