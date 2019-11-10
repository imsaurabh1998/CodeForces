//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    int countHour=a;

    while(a>=b){

        countHour+=a/b;
        int rem=a%b;
        a/=b;
        a+=rem;

    }

    cout<<countHour<<endl;
    return 0;
}

