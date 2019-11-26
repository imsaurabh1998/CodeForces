//
// Created by Saurabh on 11/26/2019.
//


#include<iostream>
#include <vector>

using namespace std;


int main() {

    int n, k;
    cin >> n >> k;

    vector<int> list;

    while (n-- > 0) {

        int a;
        cin >> a;
        list.push_back(a);

    }

    if (k == list.size()) {
        cout << 1 << endl;
        return 0;
    }
    int minsum = INT32_MAX;
    int index = -1;
    int sum = 0;

    int temp = k;
    int j = 0;
    int l = 0;
    while (temp-- > 0) {
        sum += list[j++];
    }
    minsum = sum;
    index = 1;
    for (int i = k; i < list.size(); i++) {


        sum -= list[l++];
        sum += list[i];
        if (sum < minsum) {
            minsum = sum;
            index = l +1;
        }
    }

    cout << index << endl;
}