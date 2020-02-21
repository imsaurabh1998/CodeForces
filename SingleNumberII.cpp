//
// Created by Saurabh on 2/21/2020.
//
#include<bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> A){

    if(A.size() == 0){
        return 0;
    }

    int first = 0, second = 0;
    for(int i = 0; i < A.size(); i++){
        second = second | (first & A[i]);
        first = first ^ A[i];
        cout<<"firstPart "<<second<<" "<<first<<endl;
        int check = ~(first & second);
        cout<<"Check"<<check<<endl;
        first = first & check;
        second = second & check;
        cout<<"secondPart "<<second<<" "<<first<<endl;


    }

    return first;
}
int main(){

    int n;
    cin>>n;

    vector<int> list(n);

    for(auto & i : list){
        cin>>i;
    }

    cout<<singleNumber(list);
}
