//
// Created by Saurabh on 11/4/2019.
//

#include<iostream>

using namespace std;

string capsLock(string a);

int main() {


        string a;
        cin>>a;

        cout<<capsLock(a);
}


string capsLock(string a ){

    bool flag=true;
    if(a[0]>=97&& a[0]<=122){
        for(int i=1;i<a.length();i++){

            if(a[i]>=65 && a[i]<=90) continue;

            flag=false;
        }
    }else{
            for(int i=0;i<a.length();i++){

                if(a[i]>=65 &&a[i]<=90) continue;

                flag=false;
            }

    }

    if(flag){

        if(a[0]>=97&& a[0]<=122){
            a[0]=toupper(a[0]);
            for(int i=1;i<a.length();i++)
                a[i]=tolower(a[i]);



        }else{
            for(int i=0;i<a.length();i++) {


                a[i] = tolower(a[i]);
            }

        }
    }

    return a;
}
