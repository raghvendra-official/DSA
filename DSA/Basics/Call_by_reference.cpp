#include<iostream>
using namespace std;

int incrementby1(int &n){
    n=n+1;
    return n;
}

int main (){
    int n;
    cin>>n;
    n=incrementby1(n);
    cout<<n;
}