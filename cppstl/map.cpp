#include<bits/stdc++.h>
using namespace std;
void fun(){
    map<int,int>mpp;
    mpp.insert({1,10});
    mpp.insert({2,20});
    mpp.insert({3,30});
    mpp.insert({4,40}); 
    mpp.insert({5,50}); 
    mpp.insert({6,60});
   
    for(auto it : mpp){
    cout << it.first<<"=>" <<it.second<<endl;
    } 
    mpp[1]=100;
    cout<<mpp[1];
    cout<<endl;
    mpp.erase(1);
    cout<<mpp[1];
    auto it=mpp.find(1);
    
}
int main(){
    fun();
}
