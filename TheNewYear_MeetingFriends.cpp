//
// Created by Saurabh on 11/12/2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    vector<int> list;
    list.push_back(a);
    list.push_back(b);
    list.push_back(c);

    sort(list.begin(),list.end());

    int mid=list[1];
    int firstDistance=mid-list[0];
    int lastDistance=list[2]-mid;

    cout<<firstDistance+lastDistance<<endl;

}

