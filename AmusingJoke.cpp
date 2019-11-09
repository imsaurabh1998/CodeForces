//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    string n,k,m;
    cin>>n>>k>>m;

    int hash[26]={0};


    for(int i=0;i<m.length();i++){

       hash[m[i]-'A']++;
    }


    for(int i=0;i<n.length();i++){
        hash[n[i]-'A']--;
    }

    for(int i=0;i<k.length();i++){
        hash[k[i]-'A']--;
    }



    for(int i=0;i<26;i++){
        if(hash[i]<0 || hash[i]>0){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
