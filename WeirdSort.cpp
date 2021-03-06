//
// Created by SAURABH on 24-02-2020.
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//
//    int n;
//    cin>>n;
//    while(n-->0){
//        int a,b,num=0;
//        cin>>a>>b;
//        vector<int> list(a),list1;
//        set<int> s;
//            bool flag=false;
//        for(auto & i : list){
//            cin>>i;
//        }
//        for(int i=0;i<b;i++){
//            int t;
//            cin>>t;
//            s.insert(t);
//        }
//
//        for(int i=0;i<a-1;i++){
//            for(int j=0;j<a-1;j++){
//                if(list[j]>list[j+1]){
//                    if(s.find(j+1)==s.end()){
//                        cout<<"NO"<<endl;
//                        flag=true;
//                        break;
//                    }
//                    swap(list[j],list[j+1]);
//                }
//            }
//            if(flag) break;
//        }
//
//        if(!flag)
//        cout<<"YES"<<endl;
//
//    }
//}

/**
 * Dont raise your voice, improve your argument.
 * --Desmond Tutu
 */

#include <bits/stdc++.h>
using namespace std;

#define DEBUG
#ifndef DEBUG
#define endl "\n"
#define log(args...)
#else
#define log(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); logf(_it, args); cout<<endl; }
void logf(istream_iterator<string> it) {
}
template<typename T, typename ... Args>
void logf(istream_iterator<string> it, T a, Args ... args) {
    cout << *it << "=" << a << " ";
    logf(++it, args...);
}
#endif

const double PI = acos(-1);
typedef long long ll;
#define fori(n) for(int i=0; i<int(n); i++)

#define cins(s) string s; cin>>s;
#define cini(i) int i; cin>>i;
#define cinll(l) ll l; cin>>l;
#define cind(d) double d; cin>>d;
#define cinai(a, n) vi a(n); fori(n) { cin>>a[i]; }
#define cinall(a, n) vll a(n); fori(n) { cin>>a[i]; }
#define cinas(s, n) vs s(n); fori(n) { cin>>s[i]; }
#define cinad(a, n) vd a(n); fori(n) { cin>>a[i]; }

typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<string> vs;
typedef vector<ll> vll;

void solve() {
    cini(n);
    cini(m);
//cout<<"n="<<n<<" m="<<m<<endl;
    cinai(a,n);

    vb p(n);
    for(int i=0; i<m; i++) {
        cini(aux);
        p[aux-1]=true;
    }

    bool ok=true;
    int ma=a[0];
    int ma2=0;

    for(int i=1; i<n && ok; i++) {
        if(!p[i-1])
            ma2=ma;

        if(ma2>a[i])
            ok=false;

        ma=max(ma, a[i]);
    }

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

int main() {
    cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    cini(t);
    while (t--)
        solve();
}
