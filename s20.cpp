#include<iostream>
using namespace std;
void fun(int n){
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
    
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        s=s+2;
        cout<<endl;
    }
}
void fun1(int n){
    int s=8;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
    
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        s=s-2;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
   fun1(n);
}
