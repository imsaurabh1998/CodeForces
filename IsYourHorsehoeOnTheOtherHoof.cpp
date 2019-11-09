//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main(){


    int a;
    int l[4];
    set<int> s;

    for(int i=0;i<4;i++){
        cin>>l[i];
        s.insert(l[i]);
    }
    cout<<4-s.size()<<endl;




}

