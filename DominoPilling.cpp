//
// Created by SAURABH on 01-11-2019.
//

#include<iostream>

int dominoPilling(int n , int m);
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    cout<<dominoPilling(n,m);
}

int dominoPilling(int n, int m){

    int sqaureSize=2;

    return (n*m)/sqaureSize;
}

