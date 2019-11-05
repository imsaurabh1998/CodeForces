//
// Created by SAURABH on 03-11-2019.
//


#include<iostream>

using namespace std;

string hq9(string a);

int main(){

    string a;
    cin>>a;

    cout<<hq9(a);
}

string hq9(string a){

    string str="HQ9+";
    int j=0;
    if(a=="H" || a=="Q" || a=="9" || a=="9")return "YES";
    for(int i=0;i<a.length()&&j<str.length()-2;i++){


        if(a[i]==str[j] ||a[i]==str[j+1] || a[i]==str[j+2]){
            j++;
        }
    }
    if(j>0) return "YES";

    return "NO";


}

