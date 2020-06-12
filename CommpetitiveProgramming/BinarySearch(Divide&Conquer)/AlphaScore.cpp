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

	int temp[100007] = {0};

	int k = s;
	int i = s;
	int sum = 0;

	//cout << "Value of i: " << i << " j: " << j << endl;



	while (i <= mid and j <= e) {

		if (a[i] < a[j]) {

			temp[k++] = a[i];

			sum = (sum + (a[i] * (e - j  + 1) ) % mod ) % mod ;
			//cout << "Value of i and j " << i << " : " << j << " Sum:- " << sum << endl;
			i++;
		}
		else {
			temp[k++] = a[j++];

		}
	}

	while (i <= mid) {
		temp[k++] = a[i++];
	}

	while (j <= e) {
		temp[k++] = a[j++];
	}

	for (int l = s; l <= e; l++) {

		a[l] = temp[l];
	}

	return sum;
}

int inversion(int *a, int s, int e) {

	if (s >= e) return 0;

	int mid = (s + e) / 2;
	int x = inversion(a, s, mid);
	int y = inversion(a, mid + 1, e);
	int z = merge(a, s, mid , e) ;

	return (x + y + z) % mod;
}

int32_t main() {

	sg();

	int n; cin >> n;
	int a[100007] = {0};

	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}


	cout << inversion(a, 0, n - 1) << endl;


	return 0;
}
