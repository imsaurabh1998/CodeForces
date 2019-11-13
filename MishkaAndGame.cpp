//
// Created by SAURABH on 13-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int mishka=0;
    int chris=0;

    while(n-->0){

        int a,b;
        cin>>a>>b;

        if(a>b) mishka++;
        else if(a<b) chris++;

    }

    if(mishka==chris){
        cout<<"Friendship is magic!^^"<<endl;
    }else if(mishka>chris){
        cout<<"Mishka"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }
}
