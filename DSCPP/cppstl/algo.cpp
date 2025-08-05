#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;

}
void fun(){
    vector <pair<int,int>>a={{1,2},{2,1},{5,1}};
    sort(a.begin(),a.end(),comp);
    for(auto i : a){
        cout<<i.first<<"=>"<<i.second<<endl;
        int s=8;
        int c=__builtin_popcount(s);
        cout<<c;
    }
    // int maxx=*max_element(a);
    // cout<<maxx;
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    fun();
}