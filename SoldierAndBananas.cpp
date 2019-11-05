//
// Created by SAURABH on 03-11-2019.
//

#include<iostream>

using namespace std;

int bananas(int k, int n, int w);

int main(){

    int k , n, w;
    cin>>k>>n>>w;

    cout<<bananas(k,n,w);
}


int bananas(int k, int n, int w ){

    int totalMoney;
    int temp=w;

    if(w%2!=0) {
        float x =(w / 2) + (0.5);
        totalMoney = (x * ((2 * k) + (temp - 1) * k));



    }

    else{
        totalMoney=((w/2)*((2*k)+(temp-1)*k));
    }



    if(n>totalMoney) return 0;

    return totalMoney-n;


}
