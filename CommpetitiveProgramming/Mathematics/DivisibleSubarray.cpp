//
// Created by SAURABH on 29-03-2020.
//
//This question is based on Pigeon Principle

// You are given N elements a1,a2,a3.....aN find number of good subarrays
// A good subarray is a subarrray [ai,ai+1,ai+2....aj] such the sum this subarray is divisible by N.

//Constraints

//1<=T<=10
//1<=N<=10^5
//|ai|<=10^9


#include<iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;


        int hash[100000]={0};
         hash[0]=1;
         int sum=0;
      for(int i=0;i<n;i++){
          int t;
          cin>>t;
          sum+=t;
          sum=(sum+n)%n;
          hash[sum]++;
      }

      long long res=0;
     for(int i=0;i<n;i++){
         long long m=hash[i];
         res+=(m)*(m-1)/2;
     }

     cout<<res<<endl;

    }
}