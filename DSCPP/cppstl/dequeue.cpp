#include<bits/stdc++.h>
using namespace std;
void fundeque(){
    deque<int> d,d2;
    deque<int> d1;
    d.emplace_back(10);
    d.emplace_front(20);
    d.push_back(30);
    d.push_front(40);
    d1.emplace_back(10);
    d1.emplace_front(20);
    d1.push_back(30);
    d1.push_front(40);
    for(auto i=d.begin();i!=d.end();i++){
        cout<<* i<<" ";
    }
    cout<<endl;
    d.erase(d.begin());
    d.insert(d.end(),100);
    d.swap(d1);
    for(auto i=d1.begin();i!=d1.end();i++){
        cout<<* i<<" ";
    }
    d.clear();
    for(auto i=d.begin();i!=d.end();i++){
        cout<<* i<<" ";
    }
    cout<<endl;
    d.empty();
    d2.emplace_back(20);
    d2.push_back(30);
    d2.emplace_front(10);
    d2.push_front(50);
    for(auto i=d2.begin();i!=d2.end();i++){
        cout<<* i<<" ";
    }
}
int main(){
    fundeque();
}