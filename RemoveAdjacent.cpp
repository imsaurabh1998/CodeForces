//
// Created by Saurabh on 3/2/2020.
//
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;string s;
    cin>>n>>s;

    for(int i=0;i<n-1;i++){
        if(s[i]!='a' && s[i]==s[i+1]+1){
            s[i]='$';
        }
    }

    string temp="";
    for(char a : s){
        if(a!='$') temp+=a;
    }
    s=temp;
    for(int i=s.length()-1;i>0;i--){
        if(s[i]!='a' && s[i]==s[i-1]+1){
            s[i]='$';
        }
    }

    int count=0;
    for(char a : s){
        if(a!='$') count++;
    }

    cout<< n-count<<endl;


}

