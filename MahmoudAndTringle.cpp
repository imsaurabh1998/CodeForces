//
// Created by Saurabh on 11/29/2019.
//


#include<iostream>
#include<algorithm>
#include <vector>

#include<vector>

using namespace std;
int main(){

    int m;
    cin>>m;

    vector<long long> list;
    while(m-->0){

        int t;
        cin>>t;

        list.push_back(t);
    }

    sort(list.begin(),list.end());

    for(int i=0;i<=list.size()-3;i++){

        long long a=list[i];
        long long b=list[i+1];
        long long c=list[i+2];

        if(a+b>c && a+c>b && c+b>a){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;

}
