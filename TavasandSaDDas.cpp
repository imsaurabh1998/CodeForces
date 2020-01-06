//
// Created by SAURABH on 04-01-2020.
//


#include<string>
#include<iostream>
typedef long long int ll;
using namespace std;

int main() {


    ll n;
    cin >> n;

    string val = to_string(n);

    ll count = 0;

    for (ll i = val.length() - 1, j = 0; i >= 0; --i, j++) {

        if (val[i] == '4') {
            count += 1 << j;
        }
        else {
            count += 1+ (1 << j);
        }
    }

    cout << count << endl;
}



