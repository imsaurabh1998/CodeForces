//
// Created by SAURABH on 19-01-2020.
//

#include<bits/stdc++.h>


using namespace std;
const int N = 1e6 + 5;
typedef long long ll;



int main() {

    int t;
    cin >> t;

    while (t-- > 0) {

        ll n, s, k;
        ll MIN = INT_MAX;
        cin >> n >> s >> k;
        map<ll, int> m;


        for (ll i = 0; i < k; i++) {
            ll val;
            cin >> val;
            m[val]++;
        }

        if (m[s] == 0) {
            MIN = 0;
        }
        else {
            ll uBound = s + 1;
            ll lBound = s - 1;
            ll count = 0;
            while (uBound != n + 1) {

                count++;
                if (m.find(uBound)==m.end()) {
                    MIN = min(MIN, count);
                    //cout << "MIN of Upper Bound" << MIN << endl;
                    break;
                }
                uBound++;

            }
            count = 0;

            while (lBound != 0) {

                count++;
                if (m.find(lBound) == m.end()) {
                    MIN = min(MIN, count);
                    //cout << "MIN of Lower Bound" << MIN << endl;
                    break;
                }
                lBound--;

            }
        }

        cout << MIN << endl;
    }
}
