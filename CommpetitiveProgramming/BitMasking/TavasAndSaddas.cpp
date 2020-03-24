//
// Created by SAURABH on 24-03-2020.
//

#include<iostream>

using namespace std;

int main(){

    string s;
    cin>>s;

    int len=s.length();
    int ans=(1<<len)-2;

    for(int i=s.length()-1 ,pos=0;i>=0;--i,pos++){
        if(s[i]=='7'){
            ans+=(1<<pos);
        }
    }
    cout<<ans+1<<endl;
}
