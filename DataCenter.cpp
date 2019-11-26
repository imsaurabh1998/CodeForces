//
// Created by Saurabh on 11/26/2019.
//

#include<iostream>

#include<vector>
#include<map>
#include<string>
#include <cmath>

using namespace std;

bool isPrime(int num);

int main(){

    long long n,minArea=INT32_MAX;
    cin>>n;

    if(n==1) {
        cout<<4<<endl;
        return 0;
    }

    long long sQValue=sqrt(n);
    if(n*n==sQValue*sQValue){
        cout<<n*4<<endl;
    }else if(isPrime(n)){
        cout<<(2+n*2)<<endl;
    }else {
        int i=2;

        for(;i<=n/2;i++){
            if(n%i==0){

                long long Area=n/i*2+i*2;
                if(Area<minArea){
                    minArea=Area;
                }
            }
        }
        cout<<minArea<<endl;

    }

}


bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

