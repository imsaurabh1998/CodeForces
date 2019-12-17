//
// Created by SAURABH on 17-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;


    cin>>n;


    while(n-->0){

        string val;
        cin>>val;
        bool allNumZero(true),containZero(false),DivByT(false);

        int tSum=0;
        for(int i=0;i<val.length();i++){

            if(val[i]!='0') allNumZero=false;
        }

        if(allNumZero) cout<<"red"<<endl;
        else {

            for (int i = 0; i < val.length(); i++) {

                if (val[i] == '0') containZero = true;
                else if ((val[i] - '0') % 2 == 0) DivByT = true;

                tSum += val[i] - '0';
            }

            if (containZero and DivByT && tSum % 3 == 0) {
                cout << "red" << endl;
            } else {
                cout << "cyan" << endl;
            }
        }


    }
}
