//
// Created by SAURABH on 29-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {

    ll n;
    cin>>n;

    vector<ll> list,nList;
    map<ll,int> m;

    while(n-->0){

        ll num;
        cin>>num;

        list.push_back(num);

        if(num!=0){
            m[num]++;
        }
    }

    for(ll i=1;i<=list.size();i++){

        if(m.find(i)==m.end()){
            nList.push_back(i);
        }
    }

    for(ll i=0,j=nList.size()-1;i<list.size() && j>=0; i++)
    {

        if(list[i]==0){

            ll v=nList[j];
            if(v!=i+1){
                list[i]=v;
            }else{
                swap(nList[j],nList[j-1]);
                list[i]=nList[j];
            }
            j--;
        }
    }


    for(ll i=0;i<list.size();i++){

        cout<<list[i]<<" ";
    }

}
