//
// Created by SAURABH on 24-04-2020.
//

#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define pback pop_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vis vector<string>
#define vii vector<vector<int>>
#define mii map<int, int>
#define umii unordered_map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000009 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
#define rg 1000005
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)




vi primes;
bool a[mod];
void sieve() {

    memset(a, 0, sizeof(a));

    for (int i = 3; i < mod; i += 2) a[mod] = 1;

    a[0] = 0;
    a[1] = 0;
    a[2] = 1;

    for (int i = 3; i < mod; i += 2) {
        if (a[i]) {

            for (int j = i * i; j < mod; j += i) a[j] = 0;
        }
    }

    primes.pb(2);

    for (int i = 3; i < mod; i += 2)
        if (a[i])
            primes.pb(i);
}

int pow(int a, int b) {

    int result = 1ll;

    while (b > 0) {

        if (b & 1) result = result * a;

        a = (a * a);
        b >>= 1;
    }

    return result;
}


int factorization(int n) {


    int ans = 1ll;

    int pos = 0;
    int p = primes[pos++];
    while ((p * p) <= n) {


        int count = 0;
        if (n % p == 0) {

            while (n % p == 0) {

                count++;
                n /= p;
            }

            int neumerator = pow(p, count + 1) - 1;
            int denomentor = (p - 1);

            ans *= (neumerator / denomentor);


        }

        if (n == 1) break;
        p = primes[pos++];
    }

    if (n != 1) ans *= (n + 1);

    return ans;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //sg();
    primes.clear();
    sieve();

    w(x) {
        int n; cin >> n;
        cout << (factorization(n) - n) << endl;
    }
    return 0;
}
