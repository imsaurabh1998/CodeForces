//
// Created by SAURABH on 02-02-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin>>n;

    while(n-->0){

        int sLength;
        cin>>sLength;
        string str;
        cin>>str;

        if(sLength==1){
            cout<<-1<<endl;

        }
        else{
            int tSum=0;
            for(int i=0;i<sLength;i++){
                tSum+=str[i]-'0';
                //cout<<str[i]-'0'<<endl;
            }
               // cout<<tSum<<endl;
            if(tSum%2==0 && (str[sLength-1]-'0')%2!=0){
                cout<<str<<endl;
            }else{
                while(sLength>1) {
                    tSum -= str[sLength - 1] - '0';
                    str = str.substr(0, sLength - 1);
                    sLength--;

                    if(tSum%2==0 && (str[sLength-1]-'0')%2!=0){
                        cout<<str<<endl;
                        break;
                    }
                }
                if(sLength==1){
                    cout<<-1<<endl;
                }
            }
        }
    }
}
