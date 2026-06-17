// Rotate Array by K Steps
#include<iostream>
using namespace std;
void rotatearray(int arr[],int n , int k){
    k=k%n;
    for(int r=0;r<k;r++){
        int last=arr[n-1]; // save the last element
    for(int i=n-1;i>0;i--){ // move everything to right
        arr[i]=arr[i-1];
    }
    arr[0]=last; // put saved element at first
    }
}
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter value of k: ";
    cin>>k;
    rotatearray(arr , n ,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}