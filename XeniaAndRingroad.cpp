//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int totalHouse, cas;

    cin>>totalHouse>>cas;

    int casList[cas];

        for(int i=0;i<cas;i++){
            cin>>casList[i];
        }
    long long atHouse=1;
    long long step=0;
    long long i=0;
    while(true){
        if(i<cas){
            int num=casList[i];

            if(atHouse<num){
                step+=num-atHouse;
                atHouse+=num-atHouse;

            }else if(atHouse>num){
                int temp=totalHouse-atHouse;
                step+=temp+1;
                atHouse=1;
                step+=num-atHouse;
                atHouse+=num-atHouse;

            }
            i++;
        }else{
            break;
        }
    }

    cout<<step<<endl;
    return 0;
}
