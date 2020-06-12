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


int merge(int *a, int s, int mid, int e) {

	int j = mid + 1;



	int k = s;
	int i = s;



	int leftVal = INT_MIN, rightVal = INT_MIN;
	int sum = 0;
	while (i <= mid) {

		sum += a[i];
		if ( sum > leftVal) {
			leftVal = sum;
		}
		i++;
	}

	sum = 0;
	while (j <= e) {

		sum += a[j];
		if (sum > rightVal) {
			rightVal = sum;
		}
		j++;
	}

	int suffix = INT_MIN, prefix = INT_MIN;
	int sum1 = 0; sum = 0;
	i = s, j = mid + 1;
	for (int x = mid, y = j; x >= i, y <= e; --x, y++) {

		sum += a[x];
		if (sum > suffix) suffix = sum;

		sum1 += a[y];
		if (sum1 > prefix) prefix = sum1;

	}

	return max(leftVal, max(rightVal, prefix + suffix));

}

int inversion(int *a, int s, int e) {

	if (s >= e) return 0;

	int mid = (s + e) / 2;
	int x = inversion(a, s, mid);
	int y = inversion(a, mid + 1, e);
	int z = merge(a, s, mid , e) ;

	return max(x, max(y, z));
}

int32_t main() {

	sg();

	w(x) {
		int n; cin >> n;
		int a[100007] = {0};

		for (int i = 0; i < n; i++) {
			cin >> a[i];

		}


		cout << inversion(a, 0, n - 1) << endl ;


		//for (int i = 0; i < n; i++) cout << a[i] << " ";
	}


	return 0;
}
