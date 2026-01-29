#include<bits/stdc++.h>
using namespace std;
// Count subsequences with sum = K
// int func(int i,vector<int> &arr,int sum,int k){
//     if(i==arr.size()){
//         if(sum==k) return 1;
//         return 0;
//     }
//     int l=func(i+1,arr,sum+arr[i],k);
//     int r=func(i+1,arr,sum,k);
//     return l+r;
// }
// int main(){
//     vector<int>arr={1,2,13};
//     int k=2;
//     cout<<func(0,arr,0,k);
// }
//Print any one subsequence with sum = K
bool func(int i,vector<int>&arr,int sum,int k,vector<int>&ds){
    if(i==arr.size()){
        if(sum==k){
            for(int x:ds) cout<<x<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[i]);
    if(func(i+1,arr,sum+arr[i],k,ds)) return true;
    ds.pop_back();
    if(func(i+1,arr,sum,k,ds)) return true;
    return false;
}
int main(){
    vector<int>arr={5,4,3};
    vector<int>ds;
    int k=2;
    func(0,arr,0,k,ds);
}