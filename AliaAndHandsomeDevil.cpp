//
// Created by SAURABH on 20-01-2020.
//

#include<bits/stdc++.h>

using namespace std;

int fibNumber[500]{0};


void allFibonacci(){

    fibNumber[0]=1;
    fibNumber[1]=1;

    int a=1,b=1;

    for(int i=1;i<=20;i++){

        fibNumber[a+b]=1;
        int t=a+b;
        a=b;
        b=t;
    }
}


int main() {
    allFibonacci();
    int tCase;
    cin >> tCase;

    while (tCase-- > 0) {
        int n, m;
        cin >> n >> m;

        long long divSum = 1 + n;


        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) divSum + i;
        }

        int count = 1;
        for (int i = 2; i <= divSum / 2; i++) {
            if (divSum % i == 0) count++;
        }
        if (divSum > 1) count++;

        if (fibNumber[count] > 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

