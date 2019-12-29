//
// Created by SAURABH on 28-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){

    ll n;
    cin>>n;

    while(n-->0){

        ll c, k;
        cin>>c>>k;

        if(c%k==0){
            cout<<c<<endl;
        }else{

            ll quo=c/k;
            ll rem=c%k;

            ll childLeft=k/2;

            ll totalCandies=(k*quo);

            if(totalCandies+childLeft<=c){
                totalCandies +=childLeft;
            }else{
                totalCandies += c-totalCandies;
            }

            cout<<totalCandies<<endl;
        }
    }
}

