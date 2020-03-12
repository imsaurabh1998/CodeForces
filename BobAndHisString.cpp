//
// Created by Saurabh on 3/6/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        string s;
        cin>>s;

        map<char,set<int>> m;

        for(int i=0;i<s.length();i++){

            m[s[i]].insert(i+1);

        }

        for(auto a: m){

            for(auto b: a.second){
                cout<<b<<" ";
            }
            cout<<endl;
        }
    }
}

