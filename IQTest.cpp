//
// Created by Saurabh on 11/8/2019.
//


#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    //int list[n];

    vector<int> list;

    while(n-->0){
        int temp;
        cin>>temp;

        list.push_back(temp);
    }

   int  even(0),lastEven(0),lastOdd(0);

    for(int i=0;i<list.size();i++){

        if(list[i]%2==0){
            even+=1;
            lastEven=i+1;
        }else{
            even-=1;
            lastOdd=i+1;
        }
    }

    cout<<(even>0 ?lastOdd:lastEven)<<endl;

    return 0;


}
