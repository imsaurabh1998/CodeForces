//
// Created by SAURABH on 12-12-2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<bits/stdc++.h>
#include<set>
#include<math.h>


typedef  long long int ll;
using namespace std;

int main() {

    ll n;
    cin>>n;

    while(n-->0){

        ll a, b,c;
        cin>>a>>b>>c;

        vector<ll> list;
        list.push_back(a);
        list.push_back(b);
        list.push_back(c);

        sort(list.begin(),list.end());

        a=list[0];
        b=list[1];
        c=list[2];

        ll mn=0;

        if(a==b && b==c){
            mn=abs(a-b)+abs(a-c)+abs(b-c);
        }else if(a==b && b!=c){
            mn=abs(a-b)+abs(a-(c-1))+abs(b-(c-1));
        }else if(a!=b && b==c){
            mn=abs((a+1)-(b-1))+abs((a+1)-(c-1))+abs((b-1)-(c-1));

        }else if(a!=b && b!=c){
            mn=abs((a+1)-b)+abs((a+1)-(c-1))+abs(b-(c-1));
        }

        cout<<mn<<endl;

    }

}

