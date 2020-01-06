//
// Created by Saurabh on 1/6/2020.
//

#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;


ll setBits(ll n){

    ll count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}
int main(){

    ll n;
    cin>>n;

    while(n-->0) {
        ll val;
        cin>>val;
        if (setBits(val-1) & 1) cout << "Louise" << endl;
        else cout << "Richard" << endl;
    }
}
