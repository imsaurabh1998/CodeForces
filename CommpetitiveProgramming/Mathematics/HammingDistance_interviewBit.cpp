//
// Created by SAURABH on 31-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vp vector<pair<int,int>>
#define vll vector<ll>

ll hammingDistance(vll A){

    vp bitRecord(32,{0,0});
    ll distanceSum=0;

    for(int i=0;i<A.size();i++){

        ll currentElement=A[i];
        ll currentPosition=0;

        for(int i=0;i<32;i++){
            if(currentElement&1){
                bitRecord[currentPosition].second++;
            }else{
                bitRecord[currentPosition].first++;
            }
            currentPosition++;
            currentElement=currentElement>>1;

        }
    }

    for(int i=0;i<32;i++){

        distanceSum+=(2*bitRecord[i].first*bitRecord[i].second)%1000000007;
        distanceSum%=1000000007;
    }

    return distanceSum%1000000007;
}

int main(){

    int n;cin>>n;

    vll a(n);
    for(auto &i: a) cin>>i;

    cout<<hammingDistance(a)<<endl;

}