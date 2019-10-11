//
// Created by Saurabh on 11/13/2019.
//


#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    int arr[11][11];

    int x = 0;
    while (x++ < n) {

        arr[0][x] = 1;
        arr[x][0] = 1;
    }

    for (int i = 1; i < n; i++) {

        for (int j = 1; j < n; j++) {

            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }

    cout << arr[n-1][n-1] << endl;
}

