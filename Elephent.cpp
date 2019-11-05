//
// Created by Saurabh on 11/4/2019.
//


#include<iostream>

using namespace std;

int main(){

    int number;
    cin>>number;

   int count=0;

   while(number!=0){

       if(number>=5) {
           count++;
           number-=5;
       }else if(number>=4){
           count++;
           number-=4;
       }else if(number>=3){
           count++;
           number-=3;
       }else if(number>=2){
           count++;
           number-=2;
       }else if(number>=1){
           count++;
           number-=1;
       }
   }

   cout<<count<<endl;
   return 0;
}


