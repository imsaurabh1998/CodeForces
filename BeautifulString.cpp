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

            char cArray[INT8_MAX];
            strcpy(cArray,s.c_str());

            int x=0;
            char temp[]={'a','b','c'};

            for(int i=0;i<s.length();i++){

                if(cArray[i]=='?'){
                    char t=temp[x++];

                    while(true){
                        if(t!=cArray[i-1] && t!=cArray[i+1]){
                            break;
                        }
                        if(x==3) x=0;
                        t=temp[x++];
                    }
                    cArray[i]=t;
                    if(x==3) x=0;
                }
            }

            string a(cArray);
            cout<<a<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
}
