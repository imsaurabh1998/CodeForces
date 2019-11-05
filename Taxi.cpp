//
// Created by SAURABH on 03-11-2019.
//


#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int taxi(vector<int> a);

int main(){

    int count;
    cin>>count;

    vector<int> a;

    while(count-->0){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    cout<<taxi(a);
}

int taxi(vector<int> a){

//    int count=0;
//
//    for(int t : a){
//        count+=t;
//    }
//
//    if(count%4!=0){
//        return (count/4)+1;
//    }
//
//    return (count/4);

    sort(a.begin(),a.end());

    int count=0;
    int count_1=0;
    int count_2=0;
    for(int val : a){

        if(val==1) count_1++;
        else if(val==2) count_2+=2;
        else if(val==3){
            if(count_1>0) count_1--;
            count++;
        }
        else if(val==4) count++;
    }


               count+=count_1/4+count_2/4;


                if((((count_1%4)+(count_2%4))%4)!=0){
                    count+=1;
                }
                    count+=((count_1%4)+(count_2%4))/4;


                return count;

}
