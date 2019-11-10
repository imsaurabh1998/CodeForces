//
// Created by SAURABH on 10-11-2019.
//


#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int count=n;

    while(n>=k){

        count+=n/k;
        int rem=n%k;
        n/=k;
        n+=rem;

    }

    cout<<count<<endl;


}


