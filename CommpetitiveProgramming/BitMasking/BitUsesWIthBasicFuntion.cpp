//
// Created by SAURABH on 22-03-2020.
//


#include<iostream>

using namespace std;


void countBit(int a){

     int count=0;
     while(a>0){

         if(a&1) count++;
         a=a>>1;

     }
     cout<<count<<endl;
}

void countBitFast(int a){
    int count=0;
    while(a>0){

        a=a&(a-1);
        count++;
    }

    cout<<count<<endl;

}

void oddOrEven(int a){
    if(a&1) cout<<"ODD number"<<endl;
    else cout<<"EVEN Number"<<endl;

}

void getBit(int b,int i){

    int mask=b<<i-1;
    if(mask&1) cout<<"1 is at position i"<<endl;
    else cout<<"0 is at position i"<<endl;

}

void setBit(int a, int b){

        int mask= 1<<b;
        a=a| mask;
        cout<<"after set bit to a->"<< a<<endl;
}

void clearBit(int a, int b){

    int mask=~(1<<b);
    a=a&mask;
    cout<<"after set bit to position a->"<<a<<endl;
}

void updateBit(int a, int i,int bitSet){
        int mask=0;
        if(bitSet==0){
            mask=~(1<<i);
            a=a&mask;
        }else{
         mask=1<<i;
         a=a|mask;
        }
        cout<<"After update the set bit a-> "<<a<<endl;

}


void clearIbits(int &a ,int i){

}

int clearRangeOfBit(int a, int i , int j){
    int t=~(-1);

    int maskA=t<<i;
    //these both maskB are same but differnt type of code;
    //int maskB=2^i-1;
    int maskB=(1<<i)-1;

    a=a&(maskA|maskB);
    cout<<"clearing the Range of bits i and j a is ->"<<a<<endl;
return a;
}
void mBecameSubsetOfN(int N, int M, int i ,int j){

        int _n=clearRangeOfBit(N,i,j);
        N=N|(M<<i);
        cout<<"m is substring of N now a->"<< N<<endl;


}

void decimalToBinary(int a){
    long long p=1;
    long long ans=0;

    while(a>0){
        ans+=(a&1)*p;
        a=a>>1;
        p*=10;
    }
    cout<<ans<<endl;
}

int main(){


}
