//
// Created by SAURABH on 28-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){

    int totalCase;
    cin>>totalCase;

    while(totalCase-->0){

        vector<ll> list;

        ll a,b;
        cin>>a>>b;
        ll mxNum, mxIndex;
        ll skipIndex=0;
        ll sum;
        while(a-->0){

            ll val;
            cin>>val;
            sum+=val;

            list.push_back(val);

        }

        if(sum<=b) cout<<0<<endl;
        else{
            mxNum=list[0];
            mxIndex=1;
            sum=list[0];

            bool found =false;
            ll skip=0;

            for(ll i=1;i<list.size();i++){

                if(list[i]>mxNum && !found){
                    mxNum=list[i];
                    mxIndex=i+1;
                }

                if(sum+list[i]<=b){
                    sum+=list[i];
                }else if(skip==0) {

                    sum-=mxNum;
                    found=true;
                    skip=1;
                    skipIndex=mxIndex;
                    if(sum+list[i]>b) break;
                    sum+=list[i];
                }
            }

            cout<<skipIndex<<endl;
        }
    }
}

