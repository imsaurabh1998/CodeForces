//
// Created by Saurabh on 11/6/2019.
//

#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>


using namespace std;

int main(){

    int totalS, totalGift;

    vector<int> list;
    cin>>totalS>>totalGift;
    while(totalGift-->0){

        int temp;
        cin>>temp;

        list.push_back(temp);

    }

    sort(list.begin(),list.end());

    int minCount=INT32_MAX ;
    int count=0;

    for(int i=0;i<=list.size()-totalS;i++){

        count=list[i+totalS-1]-list[i];

         if(count<minCount){

             minCount=count;
         }
    }

    cout<<minCount<<endl;

    return 0;
}

