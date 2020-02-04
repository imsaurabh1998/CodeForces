//
// Created by SAURABH on 04-02-2020.
//
#include<bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

while(n-->0) {

    int t,a;
    cin>>t;

    bool odd=false,even=false;
    for (int i = 0; i <t ; i++) {
        cin >> a;

        if(a%2!=0) odd=true;
        else even=true;

    }

    if(odd && !even && t%2!=0) cout<<"YES"<<endl;
    else if(odd && even) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
}

