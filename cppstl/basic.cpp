#include<iostream>
using namespace std;
void explainp(){
    pair<int,int>p={3,3};
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p.first;
    cout<<p1.first<<p1.second.first;
}
int main(){
    explainp();
}