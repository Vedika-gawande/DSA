#include<bits/stdc++.h>
using namespace std;
void pqueue(){
    priority_queue<int>p;
    p.push(10);
    p.push(20);
    p.emplace(50);
    cout<<p.top();
}
int main(){
    pqueue();
}