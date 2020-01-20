//
// Created by SAURABH on 14-01-2020.
//

#include<bits/stdc++.h>

using namespace std;
#define intl long long

int main(){

    int n;
    cin>>n;

    while(n-->0){

        intl a,b,totalCount=0;
        cin>>a>>b;

        if(b<9){
            cout<<0<<endl;
        }else{

            string v=to_string(b);

            bool t=true;
            for(int i=0;i<v.length();i++){
                if(v[i]=='9') continue;
                t=false;
            }

            if(t){
                totalCount=a*(intl)v.length();
            }else{
                totalCount=a*((intl)v.length()-1);
            }
        }

        cout<<totalCount<<endl;
    }

}
