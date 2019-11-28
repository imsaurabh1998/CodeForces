//
// Created by Saurabh on 11/28/2019.
//

#include<iostream>


using namespace std;

int main(){

    int n;
cin>>n;
    while(n-->0){

        int a, b;
        cin>>a>>b;

        if((a+b)%3==0){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
}
