//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>

using namespace std;

int  main(){

    int n;
    string s;
    cin>>n>>s;

    int hash[28]={0};

    for(int i=0;i<s.length();i++){
        char a=s[i];
        if(a>=65 &&a<=97){
            a=tolower(a);
        }

        hash[a-'a']=1;
    }

    for(int i=0;i<26;i++){
        if(hash[i]==0){

            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;


}

