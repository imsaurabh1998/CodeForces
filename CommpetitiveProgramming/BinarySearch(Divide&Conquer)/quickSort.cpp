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

int partition(int *a, int s, int e) {


	int pivot = a[e];
	int i = s;
	int sIndex = s;


	for (; i < e; i++) {

		if (a[i] <= pivot) {

			swap(a[i], a[sIndex]);
			sIndex++;
		}
	}
	swap(a[sIndex], a[e]);
	return sIndex;


}

void quickSort(int *a, int s, int e) {

	if (s >= e) return ;

	int p = partition(a, s, e);
	quickSort(a, s, p - 1);
	quickSort(a, p + 1, e);

	return;
}

int32_t main() {

	sg();


	int n; cin >> n;

	for (int i = 0; i < n; i++) cin >> t[i];
	quickSort(t, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
	}

	return 0;
}
