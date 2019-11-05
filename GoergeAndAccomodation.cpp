//
// Created by Saurabh on 11/4/2019.
//

#include<iostream>

using namespace std;


int main(){

    int val;
    cin>>val;
    int count=0;

    while(val--){

        int x,y;
        cin>>x>>y;


        if((y-x)>=2){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
