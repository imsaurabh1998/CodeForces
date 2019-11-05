//
// Created by Saurabh on 10/30/2019.
//

#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> checkTooLongWords(vector<string> list);

int main(){

    int n;

    cin>>n;

    string str[n];
    vector<string> list;

    if(n<1) return 0;

    string s;
    while(cin>> s){
        list.push_back(s);
    }


    list=checkTooLongWords(list);

    for(string s : list){
        cout<<s<<endl;
    }
}


vector<string> checkTooLongWords(vector<string> list){

    vector<string> shortList;


    for(string word : list){
        string s;
        if(word.length()>10){

            s+=word[0];
            s+=to_string(word.length()-2);
            s+=word[word.length()-1];
            shortList.push_back(s);
        }else{
            shortList.push_back(word);
        }
    }

    return shortList;




}

