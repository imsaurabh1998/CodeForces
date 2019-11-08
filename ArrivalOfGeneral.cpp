//
// Created by SAURABH on 08-11-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n;

    cin>>n;

    vector<int> list;
    int mn=INT16_MAX;
    int mx=INT8_MIN;

    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);

        mn=min(mx,temp);
        mx=max(mn,temp);
    }

    int count=0;
    for(int i=0;i<list.size();i++){

        for(int j=1+1;j<list.size();j++){
            if(list[i]<list[j]){
                swap(list[i],list[j]);
                count++;
            }
            if(list[0]==mx && list[list.size()-1]==mn) break;
        }
        if(list[0]==mx && list[list.size()-1]==mn) break;
    }

    cout<<count<<endl;
    return 0;
}

