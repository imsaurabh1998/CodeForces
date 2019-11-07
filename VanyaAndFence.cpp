//
// Created by Saurabh on 11/6/2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n,h;
    cin>>n>>h;

    vector<int> list;

    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);

    }

    int widthRequired=0;

    for(int i=0;i<list.size();i++){
        if(list[i]>h) widthRequired+=2;
        else widthRequired++;
    }

    cout<<widthRequired<<endl;
    return 0;
}

