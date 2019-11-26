//
// Created by Saurabh on 11/26/2019.
//

#include<iostream>
#include<map>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;

    map<string ,int> m;
    string twoCons;

    for(int i=0;i<s.length()-1;i++){

        twoCons=s.substr(i,2);

        m[twoCons]++;
//        if(m.find(twoCons)!=m.end()){
//            m[twoCons]++;
//        }else{
//            m.insert(pair<string,int> (twoCons,1));
//        }
    }

    int max=0;
    string mx;

    for(auto a : m){
            //cout<<a.first<<":"<<a.second<<endl;
        if(max<a.second){
            max=a.second;
            mx=a.first;
        }
    }
    cout<<mx<<endl;
}
