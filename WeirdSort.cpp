//
// Created by SAURABH on 24-02-2020.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n-->0){
        int a,b,num=0;
        cin>>a>>b;
        vector<int> list(a),list1;
        set<int> s;
            bool flag=false;
        for(auto & i : list){
            cin>>i;
        }
        for(int i=0;i<b;i++){
            int t;
            cin>>t;
            s.insert(t);
        }

        for(int i=0;i<a-1;i++){
            for(int j=0;j<a-1;j++){
                if(list[j]>list[j+1]){
                    if(s.find(j+1)==s.end()){
                        cout<<"NO"<<endl;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) break;
        }

        if(!flag)
        cout<<"YES"<<endl;

    }
}
