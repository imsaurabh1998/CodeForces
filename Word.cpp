//
// Created by Saurabh on 11/5/2019.
//

#include<iostream>
#include<string>





using namespace std;

int main(){

    string a;
    cin>>a;



    int countCaps=0;
    int countSmall=0;

    for(int i=0;i<a.length();i++){

        if(a[i]>=65&& a[i]<=90){
            countCaps++;

        }else{
            countSmall++;

        }

    }


    if(countCaps==countSmall){
        for(int i=0;i<a.length();i++){
            a[i]=tolower(a[i]);
        }

    }

    if(countCaps>countSmall)
        for(int i=0;i<a.length();i++)
            a[i]=toupper(a[i]);


    if(countCaps<countSmall)
        for(int i=0;i<a.length();i++)
            a[i]=tolower(a[i]);

        cout<<a<<endl;

        return 0;
}


