//
// Created by SAURABH on 01-11-2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
string helpfulMath(string value);

int main(){

    string value;

    cin>>value;

    cout<<helpfulMath(value);
}

string helpfulMath(string value){

    vector<int> list;
    string val="";
    for(char a : value){

        if(a!='+'){

            list.push_back(a-'0');
        }
    }

    sort(list.begin(),list.end());

//    for(int a : list){
//        val+=to_string(a);
//
//        val+="+";
//    }

    for(int i =0;i<list.size()-1;i++){

        val+=to_string(list[i]);

        val+="+";
    }

    val+=to_string(list[list.size()-1]);

    return val;
}
