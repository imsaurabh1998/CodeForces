//
// Created by SAURABH on 22-12-2019.
//

#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

bool checkPrime(ll a);

int main(){

    int n;
    cin>>n;

    ll b=4;
    ll a=b+n;

    while(true){

        bool x=checkPrime(a);
        bool y=checkPrime(b);
        if(!x && !y && (a-b)==n){
            cout<<a<<" "<<b<<endl;
            break;
        }
        b++;
        a++;
    }



}

bool checkPrime(ll a){

    for(ll i=2;i<=a/2;i++){

        if(a%i==0) return false;
    }

    return true;
}

