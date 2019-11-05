//
// Created by SAURABH on 02-11-2019.
//


#include<iostream>

using namespace std;

string chatRoom(string a);
int  main(){

    string a;
    cin>>a;

    cout<<chatRoom(a);
}

string chatRoom(string a ){

    string temp="hello";
    int j=0;

    for(int i=0;i<a.length() && j<temp.length();i++){

        if(a[i]==temp[j]){
            j++;
        }
    }

    if(j==5)return "YES";

    return "NO";
}
