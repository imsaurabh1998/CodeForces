//
// Created by Saurabh on 11/11/2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int temp;
    cin>>temp;
    n--;
    int max=temp;
    int min=temp;
    int count=0;
    while(n-->0){


        cin>>temp;
        if(temp>max){
            count++;
            max=temp;
        }
        if(temp<min){
            count++;
            min=temp;
        }

    }

    cout<<count<<endl;
}