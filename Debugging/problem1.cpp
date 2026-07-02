/*Problem

The program should remove all spaces from the input string.

Input
C od ing
Expected Output
Coding*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    for(int i = 0; i <=s.length(); i++) // correct: for(int i=0;i<s.length();i++)
    {
        if(s[i] = ' ' )   // correct : if (s[i]!=' ')
        {
            cout << s[i];
        }
    }

    return 0;
}