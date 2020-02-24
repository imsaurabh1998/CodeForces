//
// Created by SAURABH on 24-02-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        long long a,b,diff=0;
        cin>>a>>b;

        if(a==b){
            cout<<0<<endl;

        }
        else if(a<b){
            diff=a-b;
            if(diff%2!=0){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }else{
            diff=b-a;
            if(diff%2==0){
                cout<<1<<endl;
            }else cout<<2<<endl;
        }
    }
}

