//
// Created by Saurabh on 1/28/2020.
//

#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> list;

    for(int i=0;i<n;i++){

        int temp;
        cin>> temp;

        list.push_back(temp);
    }

    if(list.size()==1) return list[0];


    vector<int> prefix, suffix;
    bool flag=false;


    prefix.push_back(list[0]);



    for(int i=1;i<n;i++){
        if(list[i]==0) flag=true;
        prefix.push_back(list[i]*(prefix[i-1]==0 ?1 :prefix[i-1]));
    }


    suffix.push_back(list[list.size()-1]);

    int x=0;
    for(int i=n-2;i>=0;--i){

        suffix.push_back(list[i]*(suffix[x]==0 ? 1 : suffix[x]));
        x++;
    }
    int maxPower=INT_MIN;
    for(int i=0;i<n;i++){
        maxPower=max(maxPower,max(suffix[i],prefix[i]));
        maxPower= max(maxPower,list[i]);
    }

    if(maxPower<0 && flag) return 0;



    cout<<maxPower<<endl;

}

