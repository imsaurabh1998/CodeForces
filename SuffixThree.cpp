//
// Created by SAURABH on 15-12-2019.
//

#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    string val;
    while(n-->0){
        cin>>val;

        if(val.substr(val.length()-2)=="po"){
            cout<<"FILIPINO"<<endl;
        }else if(val.substr(val.length()-4)=="desu" || val.substr(val.length()-4)=="masu"){
            cout<<"JAPANESE"<<endl;
        }
        else if(val.substr(val.length()-5)=="mnida"){
            cout<<"KOREAN"<<endl;
        }

    }
}
