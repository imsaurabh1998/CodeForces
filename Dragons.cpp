//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,tCase;
    cin>>n>>tCase;

    vector<pair<int,int>> m;

    while(tCase-->0){

        int x,y;
        cin>>x>>y;

       m.push_back(make_pair(x,y));
    }

    sort(m.begin(),m.end());

    for(auto i=m.begin();i!=m.end();i++){

        if(i->first<n){
            n+=i->second;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }


    cout<<"YES"<<endl;
    return 0;
}
