//
// Created by SAURABH on 23-03-2020.
//


#include<bits/stdc++.h>

using namespace std;


int main(){

    int k;
    cin>>k;

    while(k--) {
        int n;
        cin >> n;
        long long ans = 0;

        int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

        long long  subsets = (1 << 8);

        for (int i = 1; i < subsets; i++) {

            long long dom = 1ll;
            long long set_bits = __builtin_popcount(i);

            for (int j = 0; j < 8; j++) {
                if (i & (1 << j)) dom *= primes[j];

            }
            if (set_bits & 1) ans += n / dom;
            else ans -= n / dom;


        }
        cout<<ans<<endl;
    }





}
