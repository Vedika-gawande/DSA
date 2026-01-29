#include<bits/stdc++.h>
using namespace std;
// Factorial of a number
// Parameterized

// int func(int n){
//     if(n==0){
//         return 1;
//     }
//         int fac=n*func(n-1);
//         cout<<fac;
// }
// int main(){
//     int n;
//     cin>>n;
//     func(n);
// }

//return type
int func(int n){
    if(n==0){
        return 1;
    }
    return n*func(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
}









