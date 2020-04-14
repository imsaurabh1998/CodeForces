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
#define vii vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000009 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}

void primes(int *a) {
	\
	for (int i = 3; i <= 100000; i += 2) a[i] = 1;


	for (int i = 3; i <= 100000; i += 2) {

		if (a[i] == 1) {
			for (int j = i * i; j <= 100000; j += i) {
				a[j] = 0;
			}
		}
	}

	a[0] = 0;
	a[1] = 0;
	a[2] = 1;

}
int32_t main() {

	sg();

	int n; cin >> n;

	int a[100005] = {0};


	primes(a);

	for (int i = 0; i <= n; i++) {
		if (a[i] == 1) cout << i << " ";
	}

	return 0;
}
