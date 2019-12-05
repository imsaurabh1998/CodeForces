//
// Created by SAURABH on 04-12-2019.
//

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;
    int count = 0;

    while (n > 0 and k > 0) {

        if (n == 1 and k == 1) {
            break;
        }

        if (n < k) {
            n--; k -= 2;
        }
        else {
            n -= 2; k--;
        }
        count++;
    }

    cout << count << endl;
}
