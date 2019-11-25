//
// Created by Saurabh on 11/25/2019.
//

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> list;

    while (n-- > 0) {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }

    int start(-1), end(-1);
    int i = 0;
    for (; i < list.size() - 1; i++) {

        if ((list[i] > list[i + 1]) && start == -1) {
            start = i;
        }

        if ((list[i] < list[i + 1]) && start>-1 && end==-1 ) {
            end = i;
        }
    }
    if (i == list.size()-1 && end==-1 && start>-1) {
        end = i ;
    }

    if (start > -1 && end == -1) {
        cout << "yes" << endl;
        cout << 1 << " " << list.size() << endl;
    }
    else if (start == -1 && end == -1) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else {

        sort(list.begin() + start, list.begin() +1+ end);
        for (int i = 0; i < list.size() - 1; i++) {
            if (list[i] > list[i + 1]) {
                cout << "no" << endl;
                return 0;
            }
        }

        cout << "yes" << endl;
        cout << start+1 << " " << end+1 << endl;
    }
}