//
// Created by Saurabh on 11/26/2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;

    int count=0;

    for(int i=0;i<s.length();){

        if(s[i]=='x'){
            int a=1;
            while(i<s.length() && s[++i]=='x'){
                a++;
                if(a>2) count++;
            }
        }else i++;
    }

    cout<<count<<endl;
}

