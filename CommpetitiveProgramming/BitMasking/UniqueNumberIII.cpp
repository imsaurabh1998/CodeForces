//
// Created by SAURABH on 23-03-2020.
//
#include<iostream>

using namespace std;

int a[100005]={0};
int pos[64]={0};
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];

        int temp=a[i];
        int j=0;
        while(temp>0){
            if(temp&1) pos[j]+=1;
            j++;
            temp=temp>>1;
        }
    }
    for(int a: pos) cout<<a<<" ";
    cout<<endl;
    int ans=0;
        for(int i=0;i<64;i++){

            pos[i]%=3;
            if(pos[i]) {
                ans+=1<<i;
            }

        }


        cout<<ans<<endl;

}
