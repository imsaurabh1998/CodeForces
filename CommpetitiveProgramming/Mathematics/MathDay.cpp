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
#endif
}

int32_t main() {

	sg();
	w(x) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a < c) {
			cout << "H" << endl;
			while (true) {
				int imageOfA = a;
				if (a >= c) {
					break;
				}
				a *= imageOfA;
			}
			cout << (a % c) << endl;
		} else {
			cout << (a % c) << endl;
		}
	}
	return 0;
}
