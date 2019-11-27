//
// Created by Saurabh on 11/27/2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {

    string a;
    cin >> a;

    int checker = 0;

    for (int i = 0; i < a.length(); i++) {
        checker += a[i] - '0';
    }

    if (checker < 10) {
        string app = to_string(10 - checker);
        a += app;
    }

    cout << a;
}
