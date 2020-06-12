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


vii allList;

bool checkList(vi a, vi b) {

	int n = a.size();
	for (int i = 0; i < n; i++) {

		if (a[i] != b[i]) return true;
	}
	return false;
}
void keypad(vi s, int i, int n) {

	if (i == n) {

		allList.pb(s);
		return;
	}



	for (int x = i; x < n; x++) {

		//if (x > i && s[i] == s[x]) continue;
		swap(s[i], s[x]);
		//cout << out[j] << endl;
		keypad(s, i + 1, n);
		swap(s[i], s[x]);
	}

}
int32_t main() {

	sg();

	int n; cin >> n;

	vi list(n);
	for (auto &i : list) cin >> i;

	sort(list.begin(), list.end());

	keypad(list, 0, n);

	sort(allList.begin(), allList.end());
	int i = 0;
	for (; i < allList.size() - 1; i++) {

		if (checkList(allList[i], allList[i + 1])) {
			for (int temp : allList[i]) {
				cout << temp << " ";
			}
			cout << endl;
		}
	}
	for (; i < allList.size(); i++) {
		for (int t : allList[i]) {
			cout << t << " ";
		}
		cout << endl;
	}

	return 0;
}
