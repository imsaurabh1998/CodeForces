//
// Created by SAURABH on 12-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int k=0,num=0;
        cin>>k;
        int a[6000]={0};
        bool flag=false;

        for(int i=1;i<=k;i++){

            cin>>num;
            if(a[num]==0) a[num]=i;
            else{
                if((i-a[num])>1) {
                    flag=true;
                    //cout<<num<<" "<<i<<endl;

                }

            }
        }

        if(flag) cout << "YES" << endl;
        else cout<<"NO"<<endl;

    }
}
