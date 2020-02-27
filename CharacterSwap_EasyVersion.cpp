//
// Created by Saurabh on 2/27/2020.
//

#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;

    while(n--){
        int k;
        string s,t;
        cin>>k>>s>>t;
        int count=0;
        int st[26]={0};
        int tt[26]={0};
        vector<int> list;
        for(int i=0;i<s.length();i++){
            st[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            tt[t[i]-97]++;
        }

        for(int i=0;i<26;i++){
            if(st[i]!=tt[i]){
                if(st[i]!=0)
                list.push_back(st[i]);
                else list.push_back(tt[i]);
                count++;
            }
        }

        if(list[0]==list[1] && count==2){
            printf("YES\n");
        }else printf("NO\n");
    }
}

