#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rev=0,rem=0;
    int copy=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==copy) 
    cout<<"true";
    else
    cout<< "false";
}