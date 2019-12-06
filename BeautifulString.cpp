//
// Created by SAURABH on 05-12-2019.
//

#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){


        string s;
        cin>>s;
        bool flag=true;

        for(int i=0;i<s.length()-1;i++){

            if(s[i]==s[i+1] && s[i]!='?'){
                flag=false;
                break;
            }

        }

        if(flag){

            for(int i=0;i<s.length();i++){

                if(s[i]=='?'){
                    if(s[i]=='?'){
                        if(s[i-1]!='a'&&s[i+1]!='a')s[i]='a';
                        else if(s[i-1]!='b'&&s[i+1]!='b')s[i]='b';
                        else if(s[i-1]!='c'&&s[i+1]!='c')s[i]='c';
                    }

                    }

                }


            cout<<s<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
}
