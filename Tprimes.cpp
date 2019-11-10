//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>

using namespace std;
bool checkTprime(long long n);

int main(){

    long long n;
    cin>>n;

    while(n-->0){
        long long temp;
        cin>>temp;
        bool flag=false;
        flag=checkTprime(temp);

        if(flag){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }
}

bool checkTprime(long long n){

    int count=0;

    for(long long i=2;i<=n/2;i++){

        if(n%i==0){
            count++;
        }

        if(count>1) return false;
    }
    if(count==0) return false;
    return true;
}
