//
// Created by Saurabh on 11/12/2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int m,s;
    cin>>m>>s;
vector<int> list;

    if(s<=(9*m)){

        int maxSum=0;
        int i=1;
        int rem=0;
       for(int j=0;j<s;j++){
            maxSum+=9*i;

            if(9>s)
            rem=(s-maxSum);

        }

    }else{
        cout<<"-1"<<" "<<"-1"<<endl;
    }
}

