#include<bits/stdc++.h>
using namespace std;
// void func(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<i<<endl;
//         func(i+1,n);
//     }
// }
// void func(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         func(i+1,n);
//         cout<<i<<endl;
//     }
// }
// int func(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         int sum=n+func(n-1);
        
//     }
// }

// int func(int n){
    
//    if(n==0){
//     return 1;
//    }
//    else{
//     int fac=n*func(n-1);
//     return fac;
//    }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<func(n);
// }

// void func(int i,int sum){
//     if(i==0){
//         cout<<sum;
//         return;
//     }
//     func(i-1,sum+i);
// }
// int main(){
//     int n;
//     cin>>n;
//     func(n,0);
// }

int func(int n){
    if(n==0){
        int sum=n+func(n-1);
        return sum;
    }
}
int mian(){
    int n;
    cin>>n;
    cout<<func(n);
}