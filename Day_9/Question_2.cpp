/*Determine Gender : Determine the correct output based on the number of distinct characters in the 
username. 
Input 
A string username consisting of lowercase English letters. 
Output 
Print "CHAT WITH HER!" if the number of distinct characters is even, otherwise print 
"IGNORE HIM!" 
Sample Input 1 
Sample Output 1 
alex 
CHAT WITH HER! 
Sample Input 2 
Sample Output 2 
abc 
IGNORE HIM! 
Sample Input 3 
Sample Output 3 
sevenkplus 
CHAT WITH HER!*/
#include<iostream>
#include<string>
using namespace std;
void determine_gender(string s){
    int freq[26]={0};
    // mark every character that appears
    for(char ch:s){
        freq[ch-'a']=1;
    }
    int distinctCount=0;
    // count how many differenct characters appeared
    for(int i=0;i<26;i++){
        if(freq[i]==1){
            distinctCount++;
        }
    }
    if(distinctCount%2==0){
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }
}
int main(){
    string username;
    cin>>username;
    determine_gender(username);
    return 0;
}