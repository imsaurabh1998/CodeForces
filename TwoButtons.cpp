//
// Created by Saurabh on 11/14/2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    int n,k;
    cin >> n>>k;
    int minCount = INT16_MAX;

    if (n > k) {
        cout << (n - k) << endl;
        return 0;
    }
    else {

        for (int i = n; i >= 1; i--) {


            int sum = i;
            int count = 0;

           // cout << "Value of sum: " << sum << endl;

            while (sum < k) {

                sum *= 2;
                count++;

                if (sum == k) {
                    minCount = min(minCount, count+(n-i));
                   // cout << minCount << endl;

                }
            }

            if(sum>k){
                count += (sum - k) + (n - i);
                minCount = min(minCount, count);
               // cout << minCount << endl;
            }
        }
    }

    cout << minCount << endl;


}

