#include<iostream>
using namespace std;
void fun(int n){
    for(int i=0;i<n;i++){
       // for(int j=i;j<n;j++)
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
}