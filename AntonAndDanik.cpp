//
// Created by Saurabh on 11/6/2019.
//

#include<iostream>

using namespace std;

int main(){

    int num;

    cin>>num;
    string value;

    cin>>value;

    int hash[2]={0};

    for(int i=0;i<value.length();i++){

        if(value[i]=='A') hash[0]++;
        else{
            hash[1]++;
        }
    }

    if(hash[0]==hash[1]) cout<<"Friendship"<<endl;
    else if (hash[0]>hash[1]) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;

    return 0;
}

