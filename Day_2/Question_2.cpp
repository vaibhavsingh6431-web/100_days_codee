// To find largest element: 
#include<iostream>
using namespace std;
int find_largest(int arr[],int n){
    int largest=0;
    for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
    return largest;
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
    cout<<"largest ="<<find_largest(arr ,n);
    return 0;
}