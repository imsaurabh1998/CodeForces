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
#define mod 1000000007 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
#define rg 1000005
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int t[1000000];


int rotateArraySearch(int *a, int s, int e, int key) {


	while (s <= e) {

		int mid = (s + e) / 2;

		if (a[mid] == key) return mid;

		if (a[mid] < key) {
			if (a[mid] < key && a[e] >= key) s = mid + 1;
			else e = mid - 1;
		} else {
			if (a[mid] > key && a[s] <= key) e = mid - 1;
			else s = mid + 1;
		}
	}
	return -1;
}
int32_t main() {

	sg();


	int n, k; cin >> n;
	// int s = INT_MIN;
	// int pivotIndex = -1;
	for (int i = 0; i < n; i++) {
		cin >> t[i];

		// if (t[i] > s) {
		// 	pivotIndex = i;
		// 	s = t[i];
		// }
	}
	cin >> k;
	cout << rotateArraySearch(t, 0, n - 1, k);




	return 0;
}
