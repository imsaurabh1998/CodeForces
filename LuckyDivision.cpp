//
// Created by SAURABH on 03-11-2019.
//


#include<iostream>

using namespace std;

string luckyDivision(int a);

int main(){

    int num;

    cin>>num;

    cout<<luckyDivision(num);
}

string luckyDivision(int a){

    if(a%4==0 || a%7==0 ||a%47==0 ||a%74==0 ||a%444==0 ||a%447==0 ||a%474==0 ||
            a%744==0 ||a%774==0 ||a%747==0 ||a%777==0||a%477==0){
        return "YES";
    }

    return "NO";
}
