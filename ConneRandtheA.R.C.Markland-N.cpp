//
// Created by SAURABH on 19-01-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t-->0){

        int n,s,k;
        long long  m[100000];
        cin>>n>>s>>k;
        int MIN=INT_MAX;


        for(int i=0;i<k;i++){
            int val;
            cin>>val;
            m[val]++;
        }

        if(m[s]==0){
            MIN=0;
        }else{
            int uBound=s+1;
            int lBound=s-1;
            int count=0;
            while(uBound!=n+1){

                count++;
                if(m[uBound]==0){
                    MIN=min(MIN,count);
                    cout<<"MIN of Upper Bound"<<MIN<<endl;
                    break;
                }
                uBound++;

            }
                count=0;

            while(lBound!=0){

                count++;
                if(m[lBound]==0){
                    MIN=min(MIN,count);
                    cout<<"MIN of Lower Bound"<<MIN<<endl;
                    break;
                }
                lBound--;

            }
        }

        cout<<MIN<<endl;
    }
}
