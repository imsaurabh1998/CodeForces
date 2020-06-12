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


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int res = INT_MIN;
int a[13][5];
void makePositive(int h) {

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < 5; j++) {

			if (a[i][j] == -1) {
				a[i][j] = 0;
			}
		}
	}
}

void RobotPoint(int sum, int i, int j, int h) {
	res = max(res, sum);

	if (j < 0 || j > 5 || i < 0 || i > h) return;


	sum += a[i][j];
	RobotPoint(sum, i + 1, j - 1, h);
	RobotPoint(sum, i + 1, j, h);
	RobotPoint(sum, i + 1, j + 1, h);
}

int solve( int h) {

	if (h >= 5) {
		makePositive(5);

	} else makePositive(h);


	RobotPoint(0, 0, 2, h);
	RobotPoint(0, 0, 1, h);
	RobotPoint(0, 0, 3, h);
	return res;
}

int32_t main() {

	sg();
	w(x) {
		int n; cin >> n;
		int t;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> a[i][j];
			}
		}


		cout << solve(n) << endl;

	}
	return 0;
}
