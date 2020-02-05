//
// Created by Saurabh on 2/5/2020.
//


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n-->0){
        int k;
        cin>>k;
        string s;
        cin>>s;

        map<pair<int,int>,int> m;

        int x=0,y=0,sIndex=0,eIndex=0,max=0,temp=0;
        bool sFlag=false;
        pair<int,int> p={0,0};
        m.insert(make_pair(p,0));
        for(int i=0;i<k;i++){

            char t=s[i];

            if(t=='L'){
                x--; y;
            }else if(t=='R'){
                x++;y;
            }else if(t=='U'){
                y++;x;
            }else {
                y--;x;
            }

            p.first=x;
            p.second=y;
            if(m.find(p)==m.end()){
                m.insert(make_pair(p,0));
            }else{
               m[p]=i+1;

            }
        }

    }
}
