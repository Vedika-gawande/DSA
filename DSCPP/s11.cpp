#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
}
}
void fun2(int n){
    for(int i=0;i<n-1;i++){
    for(int j=i;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun1(n);
    fun2(n);
}