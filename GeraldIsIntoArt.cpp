
//
// Created by SAURABH on 07-12-2019.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int a,b,a1,b1;
    cin>>a>>b;

    for(int i=0;i<2;i++){

        cin>>a1>>b1;

        if(a1<=a && b1<=b){
            if(a1==a&& b1<b){
                b-=b1;
            }else if(a1<a && b1==b){
                b-=b1;
            }else if(a1==a && b1==b){
                a=0,b=0;
            }
        }else if(a1<=b && b1<=a ){
            if(a1==b&& b1<a){
                b-=b1;
            }else if(a1<b && b1==a){
                b-=b1;
            }else if(a1==b && b1==a){
                a=0,b=0;
            }
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}

