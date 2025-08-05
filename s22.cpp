#include<iostream>
using namespace std;

void fun(int n){
    for(int i=1; i<=n; i++){
        int s = 2 * (n - i);
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=1; j<=s; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void fun1(int n){
    for(int i=1; i<n; i++){  // Fix: use i<n to avoid duplicate middle row
        int s = 2 * i;
        for(int j=1; j<=n - i; j++){
            cout << "*";
        }
        for(int j=1; j<=s; j++){
            cout << " ";
        }
        for(int j=1; j<=n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    fun(n);
    fun1(n);
    return 0;
}
