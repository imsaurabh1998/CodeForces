//
// Created by SAURABH on 24-03-2020.
//

#include<iostream>
using namespace std;
int main(){

    int n;cin>>n;

    while(n--){
        int k;cin>>k;

        int count=0;
        while(k){
            k=k&(k-1);
            count++;
        }
        cout<<count<<endl;
    }
}
