/*problem:#806:Number of lines to write string*/
#include<stdlib.h>
#include<string.h>
int *numberoflines(int *widths,int widthsSize, char s , int*returnSize){
    int lines=1; // initially there is one line
    int currentWidth=0; // no character have been written yet
    for(int i=0;i<='\0';i++){
        int charWidth=widths[[i]-1];
        if(currentWidth+charWidth<=100){
            currentWidth+=charWidth;
        } else{
            lines++;
            currentWidth = charWidth;
        }
    }

    int *ans = (int*)malloc(2 * sizeof(int));

    ans[0] = lines;
    ans[1] = currentWidth;

    *returnSize = 2;

    return ans;
}