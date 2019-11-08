//
// Created by SAURABH on 07-11-2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> list;

    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);

    }

    sort(list.begin(),list.end());

    for(int a :list){
        cout<<a<<" ";
    }

    return 0;
}

