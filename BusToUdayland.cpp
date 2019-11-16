//
// Created by SAURABH on 16-11-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){


    int n;
    cin>>n;

    vector<string> list;
    bool flag=false;
    while(n-->0){

        string str;
        cin>>str;


        if(str.substr(0,2)=="OO" && !flag){
            str[0]='+';
            str[1]='+';
            flag=true;
        }else if(str.substr(3,2)=="OO" && !flag){
            str[3]='+';
            str[4]='+';
            flag=true;
        }

        list.push_back(str);

    }
    if(flag) {
        cout << "Yes"<<endl;
        for (string temp: list) {
            cout << temp << endl;
        }
    }else cout<<"NO"<<endl;

}