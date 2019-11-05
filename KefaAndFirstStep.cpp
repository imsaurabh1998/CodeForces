//
// Created by SAURABH on 04-11-2019.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){


    int totalVal;
    cin>>totalVal;

    vector<int> a;

    while(totalVal-->0){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    int count=1;
    int maxCount=0;

    for(int i=0;i<a.size()-1;i++){

        if(a[i]<=a[i+1])count++;
        else count=1;

        if(count>maxCount) maxCount=count;

    }
    if(count>maxCount) maxCount=count;

    cout<<maxCount<<endl;

    return 0;

}

