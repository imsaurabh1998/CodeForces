//
// Created by SAURABH on 16-11-2019.
//

//CodeForces Contest Question Name-Single PUSH

#include<iostream>
#include <vector>
#include<map>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<int>list;
    vector<int>list1;
    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        list.push_back(a[i] - '0');
        list1.push_back(b[i] - '0');
    }

    for (int i = 0; i < list.size(); i++) {

        int num = list[i];
        int num1 = list1[i];

        int m = 0;

        if (num > num1) {
            m = min((9 - num +1+ num1), (num-num1));
        }
        else if (num < num1) {
            m = min((num1 - num), (9 - num1 + 1 + num));
        }

        count += m;

    }

    cout << count << endl;
}

