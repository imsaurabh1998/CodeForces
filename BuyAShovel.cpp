//
// Created by SAURABH on 11-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int count=0;

    int i=1;

    while(true){

        int value=n*i;
        count++;
        i++;

        if(value%10==0 ||(value-k)%10==0){
            break;
        }

    }

    cout<<count<<endl;
}
