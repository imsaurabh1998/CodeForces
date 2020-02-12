//
// Created by Saurabh on 2/11/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> list(n);
    int num=INT_MIN;
    for(auto &a : list){
        cin>>a;
        num=max(num,a);
    }

    int mx=0;
    //cout<<num<<endl;K
    for(int a : list){

        mx=max(mx,num^a);
    }
    cout<<mx<<endl;
}
