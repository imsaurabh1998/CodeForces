//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>
#include <set>

using namespace std;

int main(){

    string a;


    getline(cin, a);

    set<char> l;
    int i=0;
    while(a[i]){

        if(isalpha(a[i])){
            l.insert(a[i]);
        }

        i++;
    }

    cout<<l.size()<<endl;
}

