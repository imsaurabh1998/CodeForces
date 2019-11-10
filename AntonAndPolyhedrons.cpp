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
    m.insert(pair<string,int>("Tetrahedron",4));
    m.insert(pair<string,int>("Cube",6));
    m.insert(pair<string,int>("Octahedron",8));
    m.insert(pair<string,int>("Dodecahedron",12));
    m.insert(pair<string,int>("Icosahedron",20));

    int count=0;

    while(n-->0){

        string s;
        cin>>s;
        count+=m[s];
    }

    cout<<count<<endl;
}

