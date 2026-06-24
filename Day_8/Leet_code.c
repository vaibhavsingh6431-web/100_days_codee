// problem : #53 length of last word
#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char* s) {
    int i=strlen(s)-1;
    int count =0;
    // 1. skip spaces at end
    while(i>=0 && s[i]== ' '){
        i--;
    }
    // count characters of the last word
    while(i>=0 && s[i] != ' '){
        count++;
        i--;
    }
    return count;
}
int main(){
    char s[1000];
    printf("enter a string: ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    printf("Length of last word: %d\n",lengthOfLastWord(s));
    return 0;
}