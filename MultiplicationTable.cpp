//
// Created by SAURABH on 17-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int count=0;


    for(int i=1;i<=n;i++){

      if(k%i==0 and k/i<=n) count++;
    }

    cout<<count<<endl;
}

