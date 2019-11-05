//
// Created by Saurabh on 10/31/2019.
//


#include<iostream>

using namespace std;

int team (int totalNum);
int main(){
    int totalNum;

    cin>>totalNum;

    cout<<team(totalNum);

}


int team(int totalNum ){

    int count=0;
    int p, v, t;

    while(totalNum-->0){

        cin>>p>>v>>t;
        if(p&&v || p&&t || v&&t){
            count++;
        }
    }

    return count;
}

