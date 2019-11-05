//
// Created by SAURABH on 02-11-2019.
//


#include<iostream>
#include<vector>


using namespace std;

string capitalization(string a);

int main(){

    string a ;
    cin>>a;

    cout<<capitalization(a);
}

string capitalization(string s ){

//    string temp;
//    char a =s[0];
//    a=toupper(a);
//    temp+=a;
//
//
//    for(int i=1;i<s.length();i++){
//        temp+=s[i];
//    }
//
//    return temp;

    //char a =s[0]-32;

    char a=toupper(s[0]);

    s[0]=a;
    return s;

}

