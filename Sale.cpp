//
// Created by Saurabh on 11/27/2019.
//

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

    int n,k;

    cin>>n>>k;

    vector<int>list;

    while(n-->0){

        int t;
        cin>>t;
        list.push_back(t);
    }

    sort(list.begin(),list.end());

    int count=0;
    int i=0;

    while(k-->0){
        if(list[i]<0){
            count+=abs(list[i++]);
        }
    }


    cout<<abs(count)<<endl;
}
