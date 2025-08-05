#include<bits/stdc++.h>
using namespace std;
void setex(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    // int c=s.count(10);
    // cout<<c;
    // auto i=s.find(10);
    // cout<<* i;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<* i;
    }
}
int main(){
    setex();
}

void multisett(){
    multiset<int>m;
    m.insert(10);
    m.insert(20);
    m.insert(20);
    int c=m.count(10);

}
int main(){
    multisett();
}