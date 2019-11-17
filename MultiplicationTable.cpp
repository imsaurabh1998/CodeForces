//
// Created by SAURABH on 17-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int count=0;


    for(int i=1;i<=n;i++){

       int num=i;
       int totalCount=n;
       while(totalCount-->0){
           if(num>k)break;

           if(num==k){
               count++;
               break;
           }
           num+=i;

       }
    }

    cout<<count<<endl;
}

