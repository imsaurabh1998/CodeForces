//
// Created by Saurabh on 12/11/2019.
//


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){

    string s;
    cin>>s;
    int a;
    cin>>a;

    int wordA[26];
    int mx=INT32_MIN;
    for(int i=0;i<26;i++){
        int t;
        cin>>t;
        wordA[i]=t;
        mx=max(mx,t);
    }
     int totalCount=0;
    for(int i=1;i<=s.length()+a;i++){

        if(s.length()>=i){
            totalCount+=wordA[s[i-1]-'a']*i;
        }else{
            totalCount+=i*mx;
        }
    }

    cout<<totalCount<<endl;


}
