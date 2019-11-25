//
// Created by SAURABH on 25-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    string s;
    cin>>s;

    string result=s;

    for(int i=s.length()-1;i>=0;i--){

        result+=s[i];
    }

    cout<<result<<endl;
}