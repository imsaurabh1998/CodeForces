//
// Created by SAURABH on 04-02-2020.
//

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ll n;
    cin >> n;

    while(n-->0){

        ll val;
        cin>>val;

        ll result=val;

        ll rem;
        while(val>=10){
            result+=val/10;
            rem=val%10;
            val=val/10;
            val+=rem;
        }

        cout<<result<<endl;
    }
}
