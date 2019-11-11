//
// Created by SAURABH on 08-11-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n;

    cin>>n;

    vector<int> list;
    int mn=INT16_MAX;
    int mx=INT16_MIN;

    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);

        mn=min(mn,temp);
        mx=max(mx,temp);
    }


       int count=0;
        int minIndex=0;
        int maxIndex=-1;
        int minus=0;


    if(list[0]==mx && list[list.size()-1]==mn) {
        cout<<count<<endl;
        return 0;
    }

        for(int i=0;i<list.size();i++){

            if(list[i]==mx && maxIndex==-1){
                count=1;
                maxIndex=i;

            }else if(list[i]==mn){
                minIndex=i;

                minus=(count==0)?1:0;

            }
        }
        int result=maxIndex+(list.size()-1-minIndex)-minus;

    cout<<result<<endl;
    return 0;
}

