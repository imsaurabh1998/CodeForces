//
// Created by SAURABH on 19-11-2019.
//


#include<iostream>


using namespace std;

int main(){

    int n;
    cin>>n;
    while(n-->0){

        int x,y;
        cin>>x>>y;
        int count=0;


        if(x>y){

            while(x!=y){

                if((x-y)>=5){
                    x-=5;
                }else if((x-y)>=2){
                    x-=2;
                }else{
                    x-=1;
                }

                count++;
            }

        }else if(x<y){

            while(x!=y){

                if((y-x)>=5){
                    x+=5;
                }else if((y-x)>=2){
                    x+=2;
                }else{
                    x+=1;
                }
                count++;
            }
        }

            cout<<count<<endl;



    }


}