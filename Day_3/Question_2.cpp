//Number of occurrences of the target element using an optimized approch
#include<iostream>
using namespace std;
int number_of_occurrences(int arr[],int n,int target){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int target;
    cout<<"enter target value:";
    cin>>target;
    cout<<"output="<<number_of_occurrences(arr,n,target);
    return 0;
}