//
// Created by SAURABH on 08-11-2019.
//


#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    int hash[100]={0};

    int x,y;
    cin>>x;

    vector<int> l1;
    vector<int> l2;

    while(x-->0){
        int temp;
        cin>>temp;
        l1.push_back(temp);
        hash[temp]=1;
    }
    cin>>y;
    while(y-->0){
        int temp;
        cin>>temp;
        l2.push_back(temp);
        hash[temp]=1;
    }


    for(int i=1;i<=n;i++){

        if(hash[i]<=4 && hash[i]!=0) {
           continue;
        }else{
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }

    cout<<"I become the guy."<<endl;
    return 0;


}
