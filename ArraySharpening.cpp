//
// Created by SAURABH on 02-02-2020.
//

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


int arr[300005];
int main() {

    int k;
    cin >> k;

    while (k-- > 0) {

        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }

        int prefix = -1, suffix = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] < i) break;
            prefix = i;
        }

        for (int i = n - 1; i >= 0; --i) {
            if (arr[i] < (n - i-1 )) break;
            suffix = i;
        }

        if (prefix >= suffix) cout << "YES" << endl;
        else cout<<"NO"<<endl;
    }
}
