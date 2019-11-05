//
// Created by Saurabh on 10/31/2019.
//

#include<iostream>
#include<vector>
using namespace std;

int NextRound( int k,vector<int> list);
int main(){

    int n, k;
    vector<int> list;

    cin>>n>>k;
    int max;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        list.push_back(temp);
        if(i+1==k)  max=list[i];
    }
    cout<<NextRound(max,list);
}

int NextRound(int k ,vector<int> list){

    int count=0;

    for(int a : list){
        if(a>=k && a>0)
        count++;
    }
    return count;
}

