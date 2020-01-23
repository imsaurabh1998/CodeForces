//
// Created by Saurabh on 1/23/2020.
//

#include<iostream>

using namespace std;
typedef long long ll;

int main() {

    ll n;
    cin >> n;

    while (n-- > 0) {

        ll a;
        cin >> a;

        int arr[3];
        bool flag = false;

        for (int i = 2; i < a / 2; i++) {

            if (a % i == 0) {
                ll temp = a / i;

                for (int j = 2; j <= temp / 2; j++) {

                    if (i != j && temp % j == 0) {
                        ll temp2 = temp / j;
                        if (temp2 != i && temp2 != j)
                        {
                            arr[0] = i;
                            arr[1] = j;
                            arr[2] = temp2;
                            flag = true;
                            break;
                        }
                    }
                }

                if (flag) break;
            }
        }

        if (flag) {
            cout << "YES\n";

            for (int s : arr) {
                cout << s + " ";
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
}
