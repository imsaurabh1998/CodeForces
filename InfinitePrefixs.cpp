//
// Created by SAURABH on 29-01-2020.
//

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){

        ll n,x;
        cin>>n>>x;

        string val;
        cin>>val;


        ll zero, one;
        for( ll i =0;i<val.length();i++){

            if(val[i]=='0') zero++;
            else one++;
        }
        ll count=0;
        if(one==zero && x==0){
            cout<<-1<<endl;
        }else if((zero-one)>0 && x>0){

            ll zeros=0,ones=0;

            while(true){

                if((zeros-ones)==x){
                    count++;
                    break;
                }
                zeros+=zero;
                ones+=one;
            }

            ll lZero=zeros;
            ll lOnes=ones;

            ll rZero=zeros;
            ll rOnes=ones;

            for(int i=val.length()-1;i>=0;--i){
                if(val[i]=='0') lZero--;
                else lOnes--;

                if((lZero-lOnes)==x) count++;
            }

            for(int i=0;i<val.length();++i){
                if(val[i]=='0') rZero++;
                else rOnes++;

                if((rZero-rOnes)==x) count++;
            }

        }else{


        }



    }
}
