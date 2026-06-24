// Remove Spaces from String 
#include<iostream>
#include<string>
using namespace std;
string removeSpaces(string s){
    string result = "";
    for(char ch : s){
        if(ch != ' '){
            result+=ch;
        }
    }
    return result;
}
int main(){
    string s;
    getline(cin ,s);
    cout<<removeSpaces(s);
    return 0;
}