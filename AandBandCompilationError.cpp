//
// Created by SAURABH on 16-11-2019.
//

#include<iostream>
#include <vector>
#include<map>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<int, int> hash;
    map<int, int> hash1;
    //    vector<int> list;
    //     vector<int>list1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n - i; j++) {

            int temp;
            cin >> temp;

            if (i == 0) {

                hash.insert(pair<int, int>(temp, hash[temp]++));
            }
            if (i == 1) {

                hash[temp]--;
                hash1.insert(pair<int, int>(temp, hash1[temp]++));
            }
            if (i == 2) {
                hash1[temp]--;
            }
            //else  hash[temp]++;

        }

        if (i == 1) {

            // for(int a=0;a<list.size();a++) cout<<list[a]

            for (pair<int, int> t : hash)
                if(t.second>0)
                    cout << t.first << endl;
        }
        if (i == 2) {

            for (pair<int, int> t : hash1)
                if(t.second>0)
                    cout << t.first << endl;
        }
    }


}

