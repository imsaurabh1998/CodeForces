#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool checkPrime(ll  n) {

    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int digitSum(ll A) {

    int sum = 0;
    while (A > 0) {
        sum += A % 10;
        A /= 10;
    }
    return sum;
}
int main() {



    ll n;
    cin >> n;

    vector<ll> v;
    ll vSum = 0;
    ll tempValue = n;
    for (ll i = 2; i <= sqrt(n); i++) {

       // if (checkPrime(i)) {

            while (true) {
                if (tempValue % i == 0) {
                    v.push_back(i);
                } else {
                    break;
                }
                tempValue /= i;
            }
       // }

    }
    if(tempValue!=1){
        v.push_back(tempValue);
    }
    ll s = digitSum(n);
    for (ll a : v) {
        //cout << a << endl;
        vSum += digitSum(a);
    }

    if (s == vSum ) cout << 1 << endl;
    else cout << 0 << endl;
}