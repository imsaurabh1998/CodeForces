//
// Created by Saurabh on 11/28/2019.
//

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> list;
    while(n-->0){

        int temp;
        cin>>temp;
        list.push_back(temp);
    }

    sort(list.begin(),list.end());

    int sum=list[0];
    int count=1;
    for(int i=1;i<list.size();i++){

        if(list[i]>=sum){
            sum+=list[i];
            ++count;
        }
    }



    cout<<count<<endl;
}

