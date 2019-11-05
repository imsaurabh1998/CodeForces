//
// Created by Saurabh on 10/30/2019.
//


#include<iostream>

using namespace std;

string checkEven(int val);
int main(){
    int val;

    cin>>val;

    cout<<checkEven(val);

    return 0;
}

string checkEven(int val){

    if(val%2==0 && val>2) return "YES";

    return "NO";
}

