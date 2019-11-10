//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool checkTprime(long long n);
#define LIMIT 1000000
long long primes[LIMIT];

void allPrimes();
int check_perfect_square(long long n);

int main(){

    allPrimes();
    long long n;
    cin>>n;

    while(n-->0){
        long long temp;
        cin>>temp;
        if(temp==4){
            cout<<"YES"<<endl;

        }else if(temp%2==0){
            cout<<"NO"<<endl;
        }else if(check_perfect_square(temp)==1 && primes[int(sqrt(temp))]==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

 void allPrimes(){

    primes[0]=1;
    primes[1]=1;

    for(int i=2;i<=sqrt(LIMIT);i++){

        if(primes[i]==0){

            for(int j=i;i*j<LIMIT;j++){
                primes[i*j]=1;
            }
        }
    }
}

int check_perfect_square(long long n){
    double sqrt_n = sqrt(n);

    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}
