//
// Created by Saurabh on 10/31/2019.
//

#include<iostream>

using namespace std;

int bits(int val);
int main(){

    int val;
    cin>>val;

    cout<<bits(val);
}

int bits(int val){

    int x=0;
    while(val-->0){

        string str;
        cin>>str;

        if(str=="++X" || str=="X++") x++;
        else{
            x--;
        }
    }
    return x;
}

