//
// Created by SAURABH on 10-11-2019.
//
#include<iostream>

using namespace std;

int main(){

    int n,k;

    cin>>n>>k;

    string one="",two="",three="";

    for(int i=0;i<k;i++){
        one+="#";
    }

    for(int i=0;i<k-1;i++){
        two+=".";
    }

    two+="#";
    three+="#";
    for(int i=0;i<k-1;i++){
        three+=".";
    }


    bool flag=false;

    for(int i=0;i<n;i++){

        cout<<one<<endl;
        i++;
        if(!flag && i<n){
            cout<<two<<endl;
            flag=true;

        }

        else if(flag && i<n){
            cout<<three<<endl;
            flag=false;

        }


    }
}
