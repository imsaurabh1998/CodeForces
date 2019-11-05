//
// Created by Saurabh on 10/31/2019.
//


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int PAndStrings(string a, string b);

int main(){

    string a, b;

    cin>>a>>b;

    cout<<PAndStrings(a,b);
}

int PAndStrings(string a, string b){

//    transform(a.begin(),a.end(),a.begin(),::tolower);
//    transform(b.begin(),b.end(),b.begin(),::tolower);

for(int i=0,j=0 ;i<a.length();i++,j++){

    char x=tolower(a[i]);
    char y =tolower(b[i]);
    if(x>y) return 1;
    else if(x<y) return -1;
}

return 0;



}
