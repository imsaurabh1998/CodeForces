//
// Created by Saurabh on 11/4/2019.
//


#include<iostream>

using namespace std;

int main(){

    string a,b ;
    cin>>a>>b;


    if(a.length()!=b.length()) {

        cout << "NO";
        return 0;
    }

    for(int i=0,j=(b.length()-1); i<a.length() && j>=0;i++ ,j--){

        if(a[i]!=b[j]){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;



}

