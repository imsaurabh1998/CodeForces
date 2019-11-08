//
// Created by Saurabh on 11/8/2019.
//


#include<iostream>

using namespace std;

int main(){


    int n, k;

    cin>>n>>k;
    int i=0;
    if(n>k){
        i=k;
    }else i=n;

    if(i%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}

