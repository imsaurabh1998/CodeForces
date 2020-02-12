//
// Created by Saurabh on 2/11/2020.
//

#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> list(n);

    for(auto &a : list){
        cin>>a;
    }


    sort(list.rbegin(),list.rend());
    int mx=list[0];
    int a=0;
    for(int i=1;i<list.size();i++){
        mx=(mx|list[i])-list[i];
    }
    for(int a: list){
        cout<<a<<" ";
    }
}
