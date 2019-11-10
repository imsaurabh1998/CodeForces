//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;

    cin>>n>>k;
    int dPair=0;
    int sPair=0;

    if(n==k){
        cout<<n<<" "<<"0"<<endl;
        return 0;
    }else if(n>k){
       dPair=k;
       sPair=(n-k)/2;
        cout<<dPair<<" "<<sPair<<endl;
        return 0;
    }else if(n<k){
        dPair=n;
        sPair=(k-n)/2;
        cout<<dPair<<" "<<sPair<<endl;
    }


}
