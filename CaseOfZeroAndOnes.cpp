//
// Created by SAURABH on 17-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    string str;
    cin>>str;

    int z=0,o=0;

    for(int i=0;i<n;i++){

        if(str[i]=='1') o++;
        else z++;
    }

    if(z>o){
        cout<<z-o<<endl;
    }else{
        cout<<o-z<<endl;
    }
}

