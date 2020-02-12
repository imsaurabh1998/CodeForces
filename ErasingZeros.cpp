//
// Created by SAURABH on 12-02-2020.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        string s;
        cin>>s;

        int sIndex=0,eIndex=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                sIndex=i;
                break;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                eIndex=i;
                break;
            }
        }
        int count=0;
        for(int i=sIndex;i<eIndex;i++){
            if(s[i]=='0') count++;
        }

        cout<<count<<endl;
    }
}
