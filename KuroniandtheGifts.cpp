//
// Created by SAURABH on 03-03-2020.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int d;
        cin>>d;
        vector<int> list(d),list1(d);

        for(auto &a : list) cin>>a;
        for(auto &a : list1) cin>>a;

        sort(list.begin(),list.end());
        sort(list1.begin(),list1.end());

        for(int a : list) cout<<a<<" ";
        cout<<endl;
        for(int a: list1) cout<<a<<" ";
        cout<<endl;
    }

}
