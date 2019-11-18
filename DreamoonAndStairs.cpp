//
// Created by SAURABH on 18-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    if(n>k){
        cout<<-1<<endl;
        return 0;
    }
    if(n==k) {
        cout<<n<<endl;
        return 0;
    }

    int count=0;
    while(true){

        int qotent=(n%2==0) ?n/2 : n/2+1;
        if(qotent%k==0){
            count=qotent;
            break;
        }
    }
}