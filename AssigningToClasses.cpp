//
// Created by SAURABH on 10-02-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int k;
        cin>>k;
        vector<int> list(k*2);

        for(auto &k : list){
            cin>>k;
        }

        sort(list.begin(),list.end());
        cout<<abs((list[(k*2)/2])-(list[((k*2)/2)-1]))<<endl;
    }
}

