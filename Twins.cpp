//
// Created by SAURABH on 03-11-2019.
//


#include<iostream>

#include<vector>
#include<bits/stdc++.h>
using namespace std;

int twin(vector<int> a);

int main(){

    int totalCoin;
    cin>>totalCoin;

    vector<int> a;
    while(totalCoin-->0){
        int temp;
        cin>>temp;

        a.push_back(temp);
    }
    cout<<twin(a);
}

int twin(vector<int> a ){


    sort(a.begin(),a.end());

    int totalCount=0;
    for(int t : a ) totalCount+=t;

    int twinHalf=0;
    if(totalCount%2==0)
        twinHalf=totalCount/2+1;
    else{
        twinHalf=totalCount/2+1;
    }

    int initalCount=0;
    int totalCoin=0;
    for(int i=a.size()-1;i>=0;i--){

        if(initalCount>=twinHalf) break;

        initalCount+=a[i];
        totalCoin++;
    }

    return totalCoin;

}




