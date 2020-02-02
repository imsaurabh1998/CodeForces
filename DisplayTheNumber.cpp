//
// Created by Saurabh on 1/30/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int t;
        cin>>t;

        string val;
        bool flag=false;
        if(t%2==0) flag=true;

        if(flag){
            for(int i=0;i<t/2;i++){
                val+='1';
            }
        }else{
            for(int i=0;i<(t/2)-1;i++){
                val+='1';
            }
            val+='7';
        }

        cout<<val<<endl;
    }
}
