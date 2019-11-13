//
// Created by SAURABH on 13-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
if(n==1) {
    cout<<1<<endl;
    return 0;
}
    int count=0;
    int sum=0;
    int i=1;
    int totalSum=0;
    while(totalSum<=n){

        sum+=i;
        totalSum+=sum;


        i++;

        if(totalSum<=n)
        count++;
    }

    cout<<count<<endl;
}
