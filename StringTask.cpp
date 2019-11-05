//
// Created by Saurabh on 10/31/2019.
//

#include<iostream>
#include<string>

using namespace std;
string stringTask(string value);

int main(){

    string value;

    cin>>value;

    cout<<stringTask(value);
}

string stringTask(string value){

    string temp="";

    for(char a : value){

        if(a=='O'||a=='A' || a=='Y' ||a=='E' ||a=='U' ||a=='I' ||
                a=='o'||a=='a' || a=='y' ||a=='e' ||a=='u' ||a=='i'){
            continue;
        }else{
            temp+=".";
            temp+=tolower(a);
        }
    }

    return temp;
}

