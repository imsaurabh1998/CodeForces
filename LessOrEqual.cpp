//
// Created by SAURABH on 10-12-2019.
//

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    vector<long long int> list;

    while(a-->0){
        long long int temp;
        cin>>temp;
        list.push_back(temp);
    }

    if(list.size()==1 && b==0){
        if(b==0){
            if(list[0]==1) cout<<-1<<endl;
            else cout<<1<<endl;

        }
        return 0;
    }
    sort(list.begin(),list.end());

    if(b!=0 && list[b-1]!=list[b] ){

        if(b>1 && list[b-2])
        cout<<list[b-1]+1<<endl;
        else cout<<list[b-1]<<endl;

    }
    else cout<<-1<<endl;
}

