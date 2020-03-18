//
// Created by Saurabh on 3/18/2020.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[]={10,11,1,23,34};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);

    int index=it-arr;
    cout<<index<<'\n';
}

