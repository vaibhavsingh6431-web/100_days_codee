/*Reverse a string:
Input 
A string s representing the input string. 
Output 
Print the reversed string. 
Sample Input 1 
Sample Output 1 
s = "Computer" 
"retupmoC" 
Sample Input 2 
Sample Output 2 
s = "for" 
"rof" 
Sample Input 3 
Sample Output 3 
s = "a" 
"a" */
#include <iostream>
#include <string>
using namespace std;

string reverseString(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    return s;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string reversed = reverseString(str);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}