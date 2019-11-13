//
// Created by SAURABH on 13-11-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

   vector<int> ones,twos,threes;
    int i=0,j=0,k=0;
    int index=1;
    while(n-->0){
        int temp;
        cin>>temp;

            if(temp==1){
                ones.push_back(index);

            }else if(temp==2){
                twos.push_back(index);

            }else{
                threes.push_back(index);

            }
            index++;
    }

    int mn=min(ones.size(),min(twos.size(),threes.size()));

    cout<<mn<<endl;


    i=0;

    while(i<mn){

        cout<<ones[i]<<" "<<twos[i]<<" "<<threes[i]<<endl;
        i++;
    }


}

