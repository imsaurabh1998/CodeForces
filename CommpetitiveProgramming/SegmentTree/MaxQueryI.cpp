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
#define deg(v) cout<<"Value is: "<<v<<endl;
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


int a[100006];
vii segment(400008);



void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void build(int node, int s, int e){

    if(s==e){
        segment[node].pb(a[s]);
        return;
    }

    int m=(s+e)>>1;

    build(node<<1,s,m);
    build(node<<1|1,m+1,e);

    merge(segment[node<<1].begin(),segment[node<<1].end(),segment[node<<1|1].begin(),segment[node<<1|1].end(),
            back_inserter(segment[node]));
    return;
}

int query(int node, int s, int e, int l, int r,int k){

    if(e<l || r<s) return 0;

    if(s>=l and e<=r){
        int size=segment[node].size();
        return (size-(lower_bound(segment[node].begin(),segment[node].end(),k)-segment[node].begin()));
    }

    int m=(s+e)>>1;
    int left=query(node<<1,s,m,l,r,k);
    int right=query(node<<1|1,m+1,e,l,r,k);

    return left+right;
}

int32_t main() {

    sg();
    int n; cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    int m; cin >> m;

    build(1,1,n);

    while (m--) {
        int l,r,k;cin>>l>>r>>k;

        cout<<query(1,1,n,l,r,k)<<endl;

    }
    return 0;
}
