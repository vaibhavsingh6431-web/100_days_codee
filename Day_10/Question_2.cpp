// String Processing task:
/*Your Task: Transform the given string by following the specified rules. 
Input 
A string containing uppercase and lowercase English letters. 
Output 
Print the transformed string with all vowels removed, a '.' added before each consonant, 
and all consonants converted to lowercase. 
Sample Input 1 
Sample Output 1 
Hello 
.h.l.l 
Sample Input 2 
Sample Output 2 
Programming 
.p.r.g.r.m.m.n.g 
Sample Input 3 
Sample Output 3 
aBAcAba 
.b.c.b*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isVowel(char ch){
    return (ch=='a'||ch=='e' || ch=='i'|| ch=='o' || ch=='u');
    }
int main(){
    string s;
    cin >> s;
    for(char ch : s){
        ch = tolower(ch);
        if(!isVowel(ch)){
            cout<<"."<<ch;
        }
    }
    return 0;
}
