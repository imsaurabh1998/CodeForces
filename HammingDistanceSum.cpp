//
// Created by Saurabh on 12/9/2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string a,b;
    cin>>a>>b;

    for(auto& ch : a) ch -= '0';
    for(auto& ch : b) ch -= '0';

    vector<string> list;
    long long int i=0,x(0),y(0),sum(0);
    if(a.length()==b.length()){
        for(;i<a.length();i++){
            x=a[i]-'0';
            y=b[i]-'0';
            sum+=abs(x-y);

        }
    }else if(a.length()<b.length()){
        for(;i<=b.length()-a.length();i++){
            list.push_back(b.substr(i,a.length()));
        }

        for(string val : list){
            for(i=0;i<a.length();i++){
                x=a[i]-'0';
                y=val[i]-'0';
                sum+=abs(x-y);
            }
        }
    }

    cout<<sum<<endl;
}

