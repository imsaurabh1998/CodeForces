//
// Created by Saurabh on 12/5/2019.
//
//


#include<iostream>


using namespace std;

int main() {
    int n,m,a;
    cin >> n>>m>>a;

    if (n == m && m == a) {
        cout << 1 << endl;
        return 0;
    }
    long long int totalWidthFlag = (n % a == 0) ? n / a : (n / a) + 1;
    m -= a;
    long long int totalLengthFlag = 0;
    if(m>0)
        totalLengthFlag = (m <= a) ? totalWidthFlag : (m > a) ? (m  / a * totalWidthFlag + ((m) % a == 0 ? 0 : totalWidthFlag)) : 0;

    cout << totalWidthFlag + totalLengthFlag << endl;









}

