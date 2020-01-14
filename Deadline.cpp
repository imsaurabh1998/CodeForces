//
// Created by SAURABH on 14-01-2020.
//

#include<bits/stdc++.h>


#define int long long

using namespace std;
int32_t main(){

    int n;
    cin>>n;

    while(n-->0){

        int a,b;
        cin>>a>>b;

        if(a<=b) cout<<"YES"<<endl;
        else{

            if(((int(sqrt(b)))*2)-1<=a)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}



