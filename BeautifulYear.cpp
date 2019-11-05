//
// Created by SAURABH on 04-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int year;
    cin>>year;


    int i=year+1;

    for(;i<=9500;i++){
       // bool duplicate=true;
       int  hash[10]={0};


        int temp=i;
        while(temp>0){

            hash[temp%10]++;
            temp/=10;
        }

        for(int k=0;k<10;k++){

            if(hash[k]>1) break;


            if(k==9) {
                cout<<i<<endl;
                return 0;
            }
        }
    }

    return 0;
}

