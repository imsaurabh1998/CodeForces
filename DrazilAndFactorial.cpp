//
// Created by Saurabh on 12/2/2019.
//
//https://codeforces.com/problemset/problem/515/C

#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <numeric>
#include <functional>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <thread>
#include <tuple>
#include <limits>
#include<iostream>
using namespace std;

int fact (int n);
int main(){

    int n;
    cin>>n;

        int a =fact(n);
    cout<<a<<endl;
}

int fact( int n){

    if(n==1) return 1;

    return n*fact(n-1);
}


