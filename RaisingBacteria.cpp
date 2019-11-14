//
// Created by SAURABH on 14-11-2019.
//


#include<iostream>

using namespace std;

int main(){

    int n;

    cin>>n;
int count=0;
    while(n/2!=0){

        if(n%2!=0){
            count++;
        }

        n/=2;
    }

    cout<<count+1<<endl;
}
