//
// Created by Saurabh on 12/10/2019.
//


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    string a;
    cin>>a;
    int count(0);
    if(n==1 && count<k){
        if(a[0]!='0' && count<=k){
            count++;
            a[0]='0';
        }
    }else {

        if(a[0]!='1' && count<k){
            a[0]='1';
            count++;
        }
        for(int i=1;i<a.length();i++){

            if(a[i]!='0' && count<k){
                a[i]='0';
                count++;
            }
        }
    }

    cout<<a<<endl;
}

