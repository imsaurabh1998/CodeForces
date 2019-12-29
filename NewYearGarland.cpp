//
// Created by SAURABH on 28-12-2019.
//

#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main(){

    int n;
        cin>>n;
    while(n-->0){

        ll R,B,G;
        cin>>R>>B>>G;

        vector<ll> list;

        list.push_back(R);
        list.push_back(B);
        list.push_back(G);
        sort(list.begin(),list.end());

        ll mn,mx;
        mn=list[0];
        mx=list[2];

       ll diff=list[1]-list[0];


        if(mx>((mn*2)+1+diff)){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;

    }
}

