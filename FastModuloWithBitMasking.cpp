//
// Created by Saurabh on 3/16/2020.
// like if we have a^b%m when these values are large enough
#include<bits/stdc++.h>

using namespace std;

long long mod(int a, int b, long long m){

    long long res=1;
    while(b>0){
        if(b&1) res=(res*a)%m;
        a=(a*a)%m;
        b=b>>1;

    }
    cout<<endl;
    return res;
}
int main(){
    cout<<mod(2,3,100005);
}
