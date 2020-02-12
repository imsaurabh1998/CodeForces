//
// Created by SAURABH on 12-02-2020.
//

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){
        ll k, g,b;
        cin>>k>>g>>b;

        ll mid=0;
        mid=(k&1)?(k/2)+1:  k/2;
        ll countDays=0;

        //cout<<mid<<endl;
        if(k<=g) cout<<k<<endl;
        else if(mid<=g) cout<<mid<<endl;
        else {
            countDays=g;
            mid--;

            ll quotent=mid/g;
            ll rem=(mid+1)%g;

            countDays+=((quotent-1)*g)+(quotent*b)+rem;
            cout<<countDays<<endl;
        }

    }
}
