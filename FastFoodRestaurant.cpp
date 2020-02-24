//
// Created by SAURABH on 23-02-2020.
//

#include<bits/stdc++.h>
const int num=3;
using namespace std;

int main(){


    int n;
    cin>>n;

    while(n-->0){

        int a,b,c,count=0;

        cin>>a>>b>>c;

        vector<int> list;
        list.push_back(a);
        list.push_back(b);
        list.push_back(c);

        sort(list.begin(),list.end());

        if(list[0]>=3){
            count=7;
        }else{
            count+=list[0];

            if(list[1]>=2){
                count+=3;
            }else{
                count+=list[1];

                if(list[2]>=1){
                    count+=1;
                }
            }
        }

        cout<<count<<endl;

    }


}



