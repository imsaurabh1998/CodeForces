//
// Created by SAURABH on 09-11-2019.
//


#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int temp;
        cin>>temp;
        if(temp==1) {
            cout<<"HARD"<<endl;
            return 0;
        }
    }

    cout<<"EASY"<<endl;
    return 0;
}
