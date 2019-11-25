//
// Created by Saurabh on 11/25/2019.
//

#include<iostream>
#include <vector>
#include<algorithm>



using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int> list;
    int a=n;
    int count=0;
    while(n-->0){

        int temp;
        cin>>temp;
        list.push_back(temp);
    }



   int l=0,r=0,ans=0,sum=0,i=0;

    while(r<a){
        sum+=list[i++];

        if(sum<=k){
            ans=max(ans,(r-l+1));

        }

        while(sum>k){
            sum-=list[l];
            l++;
        }
        r++;
    }

    cout<<ans<<endl;
}
