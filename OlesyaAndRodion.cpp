//
// Created by SAURABH on 14-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;


     int i=1;

    if(n==1 && 9<m){
        cout<<-1<<endl;
        return 0;
    }
    else{

        cout<<m;
        if(m==10) i++;
        for(i;i<n;i++) cout<<'0';
    }

    return 0;
}