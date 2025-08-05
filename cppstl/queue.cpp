#include<bits/stdc++.h>
using namespace std;
void queuefun(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()+1<<" ";
    cout<<q.back()+5;
}
int main(){
    queuefun();
}