//
// Created by Saurabh on 11/11/2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int totalHours=240;

    int count=0;
    int problemTime=0;
    int i=1;
    while(n>count){

        problemTime+=(5*i);
        if((totalHours-k)>=problemTime)
            count++;
        else break;
        i++;

    }

    cout<<count<<endl;

}
