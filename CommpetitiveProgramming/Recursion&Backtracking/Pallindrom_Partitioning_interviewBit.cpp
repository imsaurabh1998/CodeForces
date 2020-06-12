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

vector<vis> pallindromeList;

bool checkPallindrome(string s) {

	if (s.length() == 1) return true;

	int i = 0, j = s.length() - 1;

	while (i < j) {

		if (s[i] != s[j])return false;
		++i;
		--j;
	}

	return true;
}
void allPallindrome(vis list, string s, int i, int n) {

	if (i == n) {
		pallindromeList.pb(list);
		return;
	}
	string build;
	for (int j = i; j < n; j++) {
		build += s[j];
		if (checkPallindrome(build)) {
			list.pb(build);
			allPallindrome(list, s, j + 1, n);
			list.pback();
		}
	}

}


int32_t main() {

	sg();

	string s; cin >> s;
	vis list;
	allPallindrome(list, s, 0, s.length());

	for (vis t : pallindromeList) {

		for (string a : t) {
			cout << a << " ";
		}
		cout << endl;
	}
	return 0;
}
