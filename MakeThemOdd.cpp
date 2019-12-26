//
// Created by SAURABH on 26-12-2019.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;



    while(n-->0){

        int totalSize;
        cin>>totalSize;

        int temp;
        map<int,int> m;
        while(totalSize-->0){
            cin>>temp;

            if(m[temp]==0) m[temp]++;
        }

        int count=0;

        map<int, int> :: reverse_iterator it;

        for(auto it =m.rbegin();it!=m.rend();it++){

            int val=it->first;

            if(val%2==0){

                while(true){

                    val=val/2;
                    count++;

                    if(m.find(val)!=m.end() || val%2!=0) break;
                }
            }
        }

        cout<<count<<endl;
    }
}

