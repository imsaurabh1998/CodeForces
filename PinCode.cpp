//
// Created by SAURABH on 29-11-2019.
//

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

int main() {


    int n;
    cin >> n;


    while (n-- > 0) {

        int cas,count(0);
        string val1;
        cin >> cas;
        unordered_map<string, int> m;
        vector<string> list;
       // vector<pair<string,int>> vPair;

        while (cas-- > 0) {
            cin >> val1;
            m[val1]++;
            //vPair.push_back(pair<string,int>(val1,1));

        }

        for (auto a : m) {
            count += a.second - 1;

            int loopChecker = a.second;

            string changedValue = a.first;
            char valArr[] = { '0','1','2','3','4','5','6','7','8','9' };
            int loopThrough = 0;
            string stringer;
            list.push_back(a.first);
            while(loopChecker > 1) {

                stringer = a.first;
                stringer[0] = valArr[loopThrough++];
                auto mapChecker = m.find(stringer);
                if (mapChecker==m.end()) {
                    list.push_back(stringer);
                    m[stringer]++;
                    loopChecker--;

                }

            }
        }

        cout << count << endl;
        for (auto j : m) {
            cout << j.first << endl;
        }

        for(string a : list){
            cout<<a<<" ";
        }

    }

}
