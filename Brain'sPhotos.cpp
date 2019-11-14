//
// Created by SAURABH on 14-11-2019.
//

#include<iostream>

using namespace std;


int main(){

    int r,c;
    cin>>r>>c;

    int color=0;
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){

            char s;
            cin>>s;

            if(s=='C' || s=='M' ||s=='Y'){
                color++;
            }
        }
    }

    if(color==0){
        cout<<"#Black&White"<<endl;
    }else{
        cout<<"#Color"<<endl;
    }
}