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

void GenParathesis(char *a, int i, int n, int open, int close) {


	if (i == n && open == close) {
		a[i] = '\0';
		cout << a << endl;
		return ;
	}

	if (open < n) {
		a[i] = '(';
		GenParathesis(a, i + 1, n, open + 1, close);
		//a[i] = '\0';
	}

	if (close < open) {
		a[i] = ')';
		GenParathesis(a, i + 1, n, open, close + 1);
		//a[i] = '\0';
	}

	return ;
}

int32_t main() {

	sg();

	int n; cin >> n;
	char a[100];
	GenParathesis(a, 0, 2 * n, 0, 0);

	return 0;
}
