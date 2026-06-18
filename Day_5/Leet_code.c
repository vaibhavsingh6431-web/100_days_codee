// Problem : 55 Jump Game
#include<stdio.h>
#include<stdbool.h>
bool canJump(int* nums, int numsSize) {
    int maxReach=0;
    for(int i=0;i<numsSize;i++){
        if(i>maxReach){
            return false;
        }
        if(i+nums[i]>maxReach){
            maxReach=i+nums[i];
        }
        if(maxReach>=numsSize-1){
            return true;
        }
    }
    return true;
}
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(canJump(arr,n)){
        printf("True");
    }else{
        printf("false");
    }
    return 0;
}