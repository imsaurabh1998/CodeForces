//
// Created by Saurabh on 11/12/2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int count=0;
    int recruitCount=0;
    while(n-->0){

        int temp;
        cin>>temp;

        if(recruitCount==0 && temp==-1){
            count++;
        }else if(temp==-1) {
            recruitCount--;
        }else{
            recruitCount+=temp;
        }
    }

    cout<<count<<endl;
}

