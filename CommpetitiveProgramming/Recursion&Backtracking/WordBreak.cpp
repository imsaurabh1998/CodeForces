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
map<string, int> dic;

void wordBreak(string a, int i, int n, vis res) {

	if (i == n) {
		for (string temp : res) {
			cout << temp << " ";
		}
		cout << endl;
		//return true;
	}

	string temp = "";
	for (int k = i; k < n; k++) {

		temp += a[k];
		if (dic.find(temp) != dic.end()) {

			res.pb(temp);
			wordBreak(a, k + 1, n, res);
			//if (val) return true;
			res.pback();
		}
	}

	return; //false;
}

int32_t main() {

	sg();

	dic.clear();
	int n; cin >> n;
	while (n--) {
		string s;
		cin >> s;
		dic.insert({s, 1});
	}

	string m; cin >> m;
	vis res;
	wordBreak(m, 0, m.length(), res);
	//cout << (wordBreak(m, 0, m.length(), res) ? "true" : "false");

	return 0;
}
