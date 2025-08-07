#include<iostream>
using namespace std;
void fun(int n){
    for(int i=1;i<=n;i++){
       char ch='A';
       int breakp=(2*i+1)/2;
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<breakp)
            ch++; else
            ch--;
        }
        
         for(int j=i;j<n;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
}