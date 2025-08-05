#include<iostream>
using namespace std;
void fun1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<2*n-(2*i-1);j++){
            cout<<" "; 
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fun1(n);
    
}