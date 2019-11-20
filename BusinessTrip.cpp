//
// Created by Saurabh on 11/20/2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> list;

    int total = 12;
    int sum = 0;
    while (total-- > 0) {

        int a;
        cin >> a;
        list.push_back(a);
        sum+=a;
    }
    if(sum<n){
        cout<<-1<<endl ;
        return 0 ;
    }else{

        sort(list.begin(),list.end(),greater<int>());

        int s=0;
        int month=0;

        while(s<n){

            s+=list[month];
            month++;
        }
        cout<<month<<endl;
    }



}
