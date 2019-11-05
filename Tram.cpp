//
// Created by SAURABH on 03-11-2019.
//

#include <iostream>
#include <vector>
using namespace std;

int tram(vector<int> a);

int main(){

    int totalCase;

    cin>>totalCase;

    vector<int> a;
    int x,y;

    while(totalCase-->0){
        cin>>x>>y;
        a.push_back(x);
        a.push_back(y);

    }

    cout<<tram(a);
}

int tram(vector<int> a){

    int capacityTram=0;
    int maxCapacity=0;

    for(int i=1;i<a.size();i++){

        if(i%2==0){
            capacityTram-=a[i];
            //cout<<"hi I'm in even"<<capacityTram;
        }


        else{
            capacityTram+=a[i];
        }

        if(maxCapacity<capacityTram){
            maxCapacity=capacityTram;
            //cout<<"max Capacity"<<maxCapacity;
        }


    }

    return maxCapacity;
}

