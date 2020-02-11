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
    for(int a: list){
        cout<<a<<" ";
    }
}
