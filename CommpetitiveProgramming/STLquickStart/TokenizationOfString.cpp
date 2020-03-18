//
// Created by Saurabh on 3/18/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    char s[100]="Today is my Day";
    char *ptr=strtok(s," ");

    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }



}