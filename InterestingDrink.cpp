//
// Created by SAURABH on 19-11-2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int b_Serch(int start, int end, vector<int> list, int val);

int main() {

    int n;
    cin >> n;

    vector<int> list;

    while (n-- > 0) {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    sort(list.begin(), list.end());

    int totalCase;
    cin >> totalCase;

    while (totalCase-- > 0) {

        int num;
        cin >> num;


        cout << b_Serch(0, list.size() - 1, list, num) << endl;
    }
}

int b_Serch(int start, int end, vector<int> list, int val) {

    if (start <= end) {

        int mid = (start + end) / 2;

        if (list[mid] == val) return mid + 1;
        else if (list[mid] > val) {
            return b_Serch(start, mid - 1, list, val);
        }
        else {
            return b_Serch(mid + 1, end, list, val);
        }
    }

    return start;
}