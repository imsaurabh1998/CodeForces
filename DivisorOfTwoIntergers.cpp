//
// Created by Saurabh on 12/4/2019.
//

#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main(){

    int n;
    cin>>n;

    map<int,int> m,m1;
    vector<int> list;

    int mx=INT32_MIN;
    while(n-->0){

        int a;
        cin>>a;
        m[a]++;
        mx=max(mx,a);
    }
        cout<<mx<<" ";
    for(int i=mx;i>0;--i){

        if(mx%i==0){
            m[i]--;
        }
    }

    int val;
    for(auto a : m){
        if(a.second>0)
            val = a.first;
    }

    cout<<val<<endl;







}

