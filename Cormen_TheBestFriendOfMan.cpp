//
// Created by SAURABH on 25-11-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int> list,list2;

    while(n-->0){
        int temp;
        cin>>temp;
        list.push_back(temp);

    }

    int num=0;
    int mx=-1;

    for(int i=0;i<list.size()-1;i++){

        if((list[i]+list[i+1])<k){
            num+=k-(list[i]+list[i+1]);
        }
    }
    cout<<num<<endl;


    list2.push_back(list[0]);
    cout<<list2[0]<<" ";
    for(int i=1;i<list.size();i++){

            int checker=k-list2[i-1];
            if(checker>=list[i]){
                list2.push_back(checker);
            }else
                list2.push_back(list[i]);

        cout<<list2[i]<<" ";
    }
}
