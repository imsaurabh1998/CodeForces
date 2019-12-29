//
// Created by SAURABH on 28-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int h,m;
        cin>>h>>m;

        int needTime=(23-h)*60+(60-m);
        cout<<needTime<<endl;
    }
}

