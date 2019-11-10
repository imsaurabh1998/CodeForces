//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>
#include<map>

using namespace std;

int main(){

    int n;
    cin>>n;

    map<string,int> m;

    while(n-->0){

        string temp;
        cin>>temp;

        if(m.find(temp)==m.end()){
            cout<<"OK"<<endl;
            m.insert(pair<string,int>( temp,1));
        }else{


          cout<<temp<<m[temp]<<endl;
          m[temp]++;
        }

    }


}

