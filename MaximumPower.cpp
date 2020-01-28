//
// Created by Saurabh on 1/28/2020.
//

#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<ll> list;

    for(int i=0;i<n;i++){

        ll temp;
        cin>> temp;

        list.push_back(temp);
    }

    vector<ll> prefix, suffix;
    prefix.push_back(list[0]);
    for(ll i=1;i<n;i++){
        prefix.push_back(list[i]*prefix[i-1]);
    }

    suffix.push_back(list[list.size()-1]);
    int x=0;
    for(ll i=n-2;i>=0;--i){

        suffix.push_back(list[i]*suffix[x++]);
    }
    ll maxPower=INT_MIN;
    for(ll i=0;i<n;i++){
        maxPower=max(maxPower,max(suffix[i],max(prefix[i],list[i])));
    }



    cout<<maxPower<<endl;
}

