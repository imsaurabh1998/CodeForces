//
// Created by SAURABH on 02-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    string t="";

    int i=0,j=s.length()-1;

    while(i<=j){

        if(s[i]!=s[j]){
            t+=s[j];
            j--;
        }
        else i++,j--;
    }

    s=t+s;
    cout<<s<<endl;
}

