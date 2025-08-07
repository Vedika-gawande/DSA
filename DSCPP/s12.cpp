#include<iostream>
using namespace std;
void func(int n){
    int start;
    for(int i=0;i<n;i++){
        if(i%2!=0)start=0;
            else start =1;
        for(int j=0;j<=i;j++){
            cout<<start; 
            start=1-start;
        }

        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    func(n);
}