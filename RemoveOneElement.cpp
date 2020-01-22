//
// Created by Saurabh on 1/22/2020.
//

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<climits>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> list;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        list.push_back(t);
    }

    vector<int> left(n,1);
    vector<int> right(n,1);
    int ans=1;
    for(int i=n-2;i>=0;--i){
        if(list[i]<list[i+1]){
            right[i]=right[i+1]+1;
            ans=max(ans,right[i]);
        }
    }

    for(int i=1;i<n;i++){
        if(list[i]>list[i-1]){
            left[i]=left[i-1]+1;
            ans=max(ans,left[i]);
        }
    }

    for(int i =1;i<n-1;i++){

        if(list[i-1]<list[i+1])
        {
            ans=max(ans,left[i-1]+right[i+1]);
        }
    }

    cout<<ans<<endl;

}