#include<bits/stdc++.h>
using namespace std;
void vect(){
    vector <int>v={10,20,30,40,50};
    for(auto i=v.begin();i!=v.end();i++){
        cout<<* i<< " ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    v.insert(v.begin(),300);
    for(auto i=v.begin();i!=v.end();i++){
        cout<<* i<< " ";
    }cout<<endl<<" ";
    cout<<v.size()<<" ";
    v.pop_back();
    vector <int>v1={4,5,6,7};
    v1.swap(v);
    v.clear();
    cout<<v.empty();
}
int main(){
    vect();
}
