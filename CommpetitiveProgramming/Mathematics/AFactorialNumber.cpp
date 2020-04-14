//
// Created by SAURABH on 04-04-2020.
//

#include<bits/stdc++.h>


using namespace std;
#define  ll unsigned long long int



int main() {

    int n;cin>>n;

    while(n--){

        ll a,b;
        cin>>a>>b;

        ll count=0;

        for(ll i=a;i>=1;--i){
            ll temp=i;
            while(true){
                if(temp%b==0) count++;
                else break;
                temp/=b;
            }
        }
        vector<int> l;
        l.pop_back();


        cout<<count<<endl;


    }


}
