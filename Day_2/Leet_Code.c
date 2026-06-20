// problem number :27.Remove element
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n,value;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter value: ");
    scanf("%d" ,&value);
    printf("output:%d ",removeElement(arr ,n,value));
    return 0;
}