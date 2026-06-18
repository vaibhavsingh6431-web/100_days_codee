/*Check Equal Array: Determine whether the two array are equal using an optimized approch.The order of element may be different, but the frequency of each element must be the same.
example:
Print true if both arrays are equal, otherwise print false. 
Sample Input 1 
a[] = [1,2,5,4,0], b[] = [2,4,5,0,1] 
Sample Output 1 
true 
Sample Input 2 
a[] = [1,2,5], b[] = [2,4,15] 
Sample Output 2 
false */
#include<iostream>
#include<algorithm>
using namespace std;
bool checkEqual(int a[],int b[],int n){
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int a[n];
    cout<<"enter element for a:"<<endl;;
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
     cout<<"enter element for b:"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    if(checkEqual(a,b,n)){
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}