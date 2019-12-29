//
// Created by SAURABH on 28-12-2019.
//



#include<bits/stdc++.h>

using namespace std;


struct comp{

    bool operator()(string l , string r){
        return l+r > r+l;
    }
};

string arr[1000];
int main(){

int n;
cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n,comp());

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}