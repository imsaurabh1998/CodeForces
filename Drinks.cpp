//
// Created by Saurabh on 11/8/2019.
//

#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int>list;


    double sum=0.0;
    int s=n;
    while (n-- > 0) {
        int temp;
        cin >> temp;
       sum+=temp;
    }
    sum=sum/s;

    printf("%.12lf",sum);

    return 0;



}