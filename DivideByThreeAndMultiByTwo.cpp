//
// Created by SAURABH on 11-12-2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
//#include<bits/stdc++.h>

typedef unsigned long long int ll;
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<ll> list;
    map<ll, ll> m;

    while (n-- > 0) {
        ll temp;
        cin >> temp;
        list.push_back(temp);
        m[temp]++;
    }

    sort(list.begin(), list.end());

    for (int i = list.size() - 1; i >= 0; i--) {

        ll val = list[i];
        map<ll, ll> vMap = m;
        bool flag = false;

        vector<ll> transArray;
        while (true) {

            if (vMap[val * 2] > 0) {
                transArray.push_back(val * 2);
                vMap[val * 2]--;
                val *= 2;
            }
            else if (vMap[val / 3] > 0) {
                transArray.push_back(val / 3);
                vMap[val / 3]--;
                val /= 3;
            }
            else {
                if (transArray.size() == list.size()-1 || transArray.size() == list.size() ) {
                    flag = true;

                }
                break;
            }
        }

        if (flag) {
            if(transArray.size() == list.size() - 1) cout << list[i] << " ";
            for (ll t : transArray) {
                cout << t << " ";
            }
            break;
        }


    }
}
