#include<bits/stdc++.h>
using namespace std;
void stackfun(){
    stack<int>s,s1;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.size();
    s.swap(s1);
}
int main(){
    stackfun();
}