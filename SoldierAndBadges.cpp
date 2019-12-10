//
// Created by Saurabh on 12/10/2019.
//

#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
#include<vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> list;
    map<int, int> m;
    int mx = INT32_MIN;
    int mn = INT32_MAX;
    while (n-- > 0) {
        int temp;
        cin >> temp;
        list.push_back(temp);
        m[temp]++;
        mn = min(mn, temp);
        mx = max(mx, temp);
    }


    sort(list.begin(), list.end());

    int minCount = 0;

    /*for (int i = 0; i < list.size() - 1; i++) {

        if (list[i] == list[i + 1]) {

            while (true) {
                if (m[mn] == 0 && list[i + 1] < mn) {
                    break;
                }
                mn++;
            }
            minCount += mn - list[i + 1];
            list[i + 1] = mn++;

        }
    }*/

    for (auto a : m) {
        int first = a.first;
        int second = a.second;

        while (second-- > 1) {

            while (true) {
                if (m[mn] == 0 && a.first < mn) {
                    minCount += mn - a.first;
                    mn++;
                    break;
                }
                mn++;
            }
        }
    }
    cout << minCount << endl;

    /*13
        1 1 2 2 4 5 11 13 14 17 18 18 18*/


}
