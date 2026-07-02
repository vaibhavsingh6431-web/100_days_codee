#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

int smallestSubstring(string str)
{
    unordered_set<char> st;

    // Count total distinct characters
    for(char ch : str)
        st.insert(ch);

    int totalDistinct = st.size();

    unordered_map<char,int> freq;

    int left = 0;
    int minLen = INT_MAX;
    int distinctInWindow = 0;

    for(int right = 0; right < str.length(); right++)
    {
        freq[str[right]]++;

        if(freq[str[right]] == 1)
            distinctInWindow++;

        while(distinctInWindow == totalDistinct)
        {
            minLen = min(minLen, right - left + 1);

            freq[str[left]]--;

            if(freq[str[left]] == 0)
                distinctInWindow--;

            left++;
        }
    }

    return minLen;
}

int main()
{
    string str;
    cin >> str;

    cout << smallestSubstring(str);

    return 0;
}