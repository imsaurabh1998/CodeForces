//
// Created by Saurabh on 11/6/2019.
//


#include<iostream>
#include <vector>

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

    int count=1;
    int prev=list[0];
    for(int i=1;i<list.size();i++){

        if(prev!=list[i]){
            prev=list[i];
            count++;
        }
    }

    cout<<count<<endl;

    return 0;

}
