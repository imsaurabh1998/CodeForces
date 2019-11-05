//
// Created by SAURABH on 02-11-2019.
//

#include<iostream>

#include<array>

using namespace std;

string boyOrGirl(string a);
int main(){

    string a ;
    cin>>a;

    cout<<boyOrGirl(a);
}

string boyOrGirl(string a ){

    int hash[27]={0};


    for(int i=0;i<a.length();i++){

        char temp=a[i];

        if(hash[(int)temp-97]==0){

            hash[(int)temp-97]=1;

        }
    }


    int count=0;
    for(int i=0;i<27;i++){

        if(hash[i]!=0) count++;
    }

    if(count%2==0) return "CHAT WITH HER!";

    return "IGNORE HIM!";

}

