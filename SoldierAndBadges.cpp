//
// Created by Saurabh on 12/10/2019.
//

#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
#include<vector>

using namespace std;

int main(){

    int n;
    vector<int> list;
    map<int ,int> m;
    int mn=INT32_MIN;
    int mx=INT32_MAX;
    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);
        m[temp]++;
        mn=min(mn,temp);
        mx=max(mx,temp);
    }

    sort(list.begin(),list.end());

    int minCount=0;

    for(int i=0;i<list.size()-1;i++){

        if(list[i]==list[i+1]){

            while(m[mn]!=0){
                mn++;
            }
            minCount+=mn-list[i+1];
            list[i+1]=mn++;

        }
    }

    cout<<minCount<<endl;



}
