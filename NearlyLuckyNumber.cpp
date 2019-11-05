//
// Created by Saurabh on 11/4/2019.
//


#include<iostream>

using namespace std;

int main(){

    long long n;
    cin>>n;

    int count=0;

    while(n>0){

        if(n%10==4 || n%10==7){
            count++;
        }
        n/=10;
    }

    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
