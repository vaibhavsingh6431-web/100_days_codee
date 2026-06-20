/* Union of Two Sorted Arrays: Find the union of two sorted array using an optimized approch 
Input 
Two sorted integer arrays a[] and b[]. 
Output 
Print the union of both arrays in sorted order with distinct elements only. 
Sample Input 1 
a[]=[1,2,3,4,5], b[]=[1,2,3,6,7] 
Sample Output 1 
[1,2,3,4,5,6,7] 
Sample Input 2 
Sample Output 2 
a[]=[2,2,3,4,5], b[]=[1,1,2,3,4] 
[1,2,3,4,5] 
Sample Input 3 
Sample Output 3 
a[]=[1,1,1,1,1], b[]=[2,2,2,2,2] 
[1,2]*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> findUnion(vector<int>& a , vector<int>& b){
    vector <int >ans;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            if(ans.empty() || ans.back() !=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        } else if(a[i]>b[j]){
            if(ans.empty() ||ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            j++;
        } else {
            if(ans.empty()||ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    while(i<a.size()){
        if(ans.empty()||ans.back() !=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size()){
        if(ans.empty() ||ans.back()!=b[j]){
            ans.push_back(n[j]);
        }
        j++;
    }
    return ans;
}
int main(){
       vector<int> a = {2,2,3,4,5};
    vector<int> b = {1,1,2,3,4};

    vector<int> result = findUnion(a,b);

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}