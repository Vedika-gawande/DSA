#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int copy=num;
    int rem=0,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==copy){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
}