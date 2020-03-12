//
// Created by SAURABH on 12-03-2020.
//
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        long long lCount=1, mVal=0;
        string a;
        cin>>a;

        for(int i=a.length()-1;i>=0;--i){

            if(a[i]=='L')lCount++;
            else{
                mVal=max(mVal,lCount);
                lCount=1;
            }
        }
    }
}



