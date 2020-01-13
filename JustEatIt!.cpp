//
// Created by SAURABH on 11-01-2020.
//

#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main(){


    int totalCase;
    cin>>totalCase;

    while(totalCase-->0){


        int nums;
        cin>>nums;

        vector<ll> list;
        int mn=INT_MAX;
        bool flag=false;
        int countMinus=0;
        ll totalSum=0;
        while(nums-->0){
            ll val;
            cin>>val;
            list.push_back(val);
            totalSum+=val;

            if(val<0) {
                flag = true;
                countMinus++;
            }

        }
        if(flag){

            ll Psum=0;
            ll count=0;
            ll Ssum=0;
            ll countMinusSuffix=countMinus-1;


            for(int i=0;i<list.size();i++ ){

                if(list[i]<0){
                    Psum+=list[i];
                    count++;
                }else {
                    Psum += list[i];

                }

                if(list[list.size()-1-i]<0){
                        Ssum+=list[list.size()-1-i];
                    countMinusSuffix--;
                }else{
                   Ssum+=list[list.size()-1-i];
                }

                if(count==countMinus-1){
                    if(Psum>totalSum) cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                    break;
                }

                if(countMinusSuffix==0){
                    if(Ssum>totalSum) cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                    break;
                }

            }
        }else cout<<"YES"<<endl;



    }
}
