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

const int N = 100;
int n;
int a[N][N];

int totalConfiguration = 0;
vector<pair<int, int>>Move = {{ -1, -2}, { -2, -1}, { -2, 1}, { -1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};

void print() {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1)
				cout << "{" << i << "-" << j << "}" << " ";
		}
	}
	cout << " ";
}

//isSafe method check if all knight move are 0 than we can place the knight
// on that place otherwise not
bool isSafe(int i, int j) {

	for (int k = 0; k < 8; k++) {


		int r = i + Move[k].ff;
		int c = j + Move[k].ss;

		if (r < 0 || c < 0 || r >= n || c >= n) continue;

		if (a[r][c] == 1) return false;
	}

	return true;
}



bool solve(int i, int j, int count) {

//if count greater than n then we will return false
	if (count > n) return false;
	//when i is greater than n
	if (i >= n) return false;


	if (count == n) {
		print();
		totalConfiguration++;

		return false;
	}

// when we reach at the end of coloumn then we need to move to next row
	if (j >= n) return solve(i + 1, 0, count);


//check weather we can place the knight or not
	if (isSafe(i, j)) {

		a[i][j] = 1;
		bool next = solve(i, j + 1, count + 1);
		if (next) return true;
		a[i][j] = 0;

	}
	//Most important case while we reach the column end so
	//we need to traverse without increament the count of 1's.
	solve(i, j + 1, count);
	return false;

}

int32_t main() {

	sg();

	cin >> n;
	memset(a, 0, sizeof(a));
	solve(0, 0, 0);
	cout << "\n" << totalConfiguration << endl;

	return 0;
}
