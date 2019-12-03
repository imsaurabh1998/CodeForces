//
// Created by SAURABH on 03-12-2019.
//

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> list, list1;
    int minusMin = INT32_MIN;
    long long int minCoin = 0;
    int allProduct=1;
    int countZero = 0;
    int countMinus = 0;
    while (n-- > 0) {

        int temp;
        cin >> temp;

        if (temp == 0) {
            minCoin++;
            countZero++;
            continue;
        }
        if (temp < 0) {
            minCoin += abs(temp) - 1;
            allProduct *= temp + (abs(temp) - 1);
            countMinus++;
            //list.push_back(temp);
            //minusMin = max(minusMin, temp);

        }
        else {
            minCoin += temp - 1;
            allProduct *= temp - (temp - 1);
            //list1.push_back(temp);
        }


    }

    if (allProduct < 0 && countZero > 0) {
        cout << minCoin << endl;

    }
    else if (allProduct < 0) cout << minCoin + 2 << endl;
    else cout << minCoin << endl;


}

