#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem=0;
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
}

