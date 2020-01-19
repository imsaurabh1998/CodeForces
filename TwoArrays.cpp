//
// Created by SAURABH on 19-01-2020.
//

#include<bits/stdc++.h>

using namespace std;
int mod=10e5+7;

int fact(int n){

    if(n==1) return 1;
    return n*(n-1);
}

int C(int n,int k){
    return fact(k)*fact(n-k);
}


int main(){

        int n,m;
        cin>>n>>m;
        cout<<(C((n+(2*m)-1),2*m)%mod);
}

