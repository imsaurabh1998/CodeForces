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

    while (n-- > 0) {

        int len;
        cin >> len;

        vector<int> list, list1;
        int storeVal;
        bool flag = true;
        for (int i = 0; i < len; i++) {
            cin >> storeVal;
            list.push_back(storeVal);
        }

        for (int i = 0; i < len; i++) {
            cin >> storeVal;

            list1.push_back(storeVal);

        }
        int l = -1, r = -1, diff = -1;

        for (int i = 0; i < list.size(); i++) {


            if (list[i] > list1[i]) {
                flag = false;
                break;
            }

            if (list[i] < list1[i] ) {

                if (l == -1) {
                    l = i;
                    diff = list1[i] - list[i];

                }
                if (diff == (list1[i] - list[i])) {
                    r = i;
                }
                else {
                    flag = false;
                    break;
                }

            }

        }
        if (l > -1) {
            for (int x = l; x <= r; x++) {

                if ((list1[x] - list[x]) != diff) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)cout << "YES" << endl;
        else cout << "NO" << endl;






    }
}

