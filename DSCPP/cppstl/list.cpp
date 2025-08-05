#include<bits/stdc++.h>
using namespace std;
void listfun(){
    list<int> l1;
    list<int> l2;
    l1.emplace_back(2);
    l1.push_back(4);
    l1.push_front(6);
    l1.emplace_front(1);
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<* i<<" ";
    }
    cout<<endl;
    l1.erase(l1.begin());
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<* i<<" ";
    }cout<<endl;
    l1.insert(l1.begin(),10);
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<* i<<" ";
    }
    cout<<endl;
    cout<<l1.size();
    l1.swap(l2);
    for(auto i=l2.begin();i!=l2.end();i++){
        cout<<* i<<" ";
    }
    l1.clear();
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<* i<<" ";
    }
    
}
int main(){
    listfun();
}