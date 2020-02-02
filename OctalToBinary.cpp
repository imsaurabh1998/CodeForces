//
// Created by Saurabh on 1/30/2020.
//



#include<iostream>
typedef long long int ll;
using namespace std;
int main() {

    ll n;
    cin>>n;

    while(n){
        if(n&1) cout<<1;
        else cout<<0;
        n>>1;
    }
    return 0;
}