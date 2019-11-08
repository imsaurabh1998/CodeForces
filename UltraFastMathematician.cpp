//
// Created by Saurabh on 11/7/2019.
//

#include<iostream>

using namespace std;

int main(){


    string a,b;

    cin>>a>>b;

    string s="";

    for(int i=0;i<a.length();i++){

        if(a[i]!=b[i]){
            s+="1";
        }else{
            s+="0";
        }
    }

    cout<<s<<endl;

    return 0;
}

