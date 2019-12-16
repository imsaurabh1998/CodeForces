//
// Created by SAURABH on 15-12-2019.
//

//#include<bits/stdc++.h>

#include<iostream>
#include<string>
#include<algorithm>


const unsigned int M = 1000000007;
using namespace std;
unsigned long long int ll;
string s;

int main() {

    int n;
    cin >> n;

    while (n-- > 0) {

        long long int x;
        cin >> x;  cin >> s;

        long long int l(0);
        string c;

        do {
            l++;
            c = s.substr(l);
            s = s.substr(0, l);
            long long int v = (long long int)s[s.length() - 1] - '0';
            for (long long int i = 0; i < v; i++) {
                if (s.length() > M) s = s.substr(M);
                s += c;
            }


        } while (l != x);

        cout << ((long long int)s.length() % M) << endl;
    }
}


//#include <bits/stdc++.h>
//using namespace std;
//#define int long long
//#define mp make_pair
//#define pi pair<int,int>
//#define ppi pair<int,pi >
//#define ld long double
//#define pb push_back
//#define mod 1000000007
//#define F first
//#define S second
//#define endl "\n"
//typedef vector<int> vi;
//typedef vector<bool> vb;
//typedef vector<string> vs;
//typedef vector< vector<int> > vvi;
//typedef vector<pair<int, int> > vpii;
//typedef vector<int>::iterator ii;
//typedef vector<vi>::iterator ivi;
//typedef unordered_map<int, int> umapii;
//typedef unordered_map<int, bool> umapib;
//typedef unordered_map<int, string> umapis;
//typedef unordered_map<string, int> umapsi;
//typedef unordered_map<string, string> umapss;
//typedef map<int, int> mapii;
//typedef map<string, int> mapsi;
//typedef map<int, string> mapis;
//typedef map<pair<int, int>, int> mappiii;
//typedef map<int, pair<int,int> > mapipii;
//typedef map<int, bool> mapib;
//typedef pair<int, int> pii;
//typedef unordered_set<int> useti;
//typedef set<int> seti;
//typedef priority_queue<int> mxpq;
//typedef priority_queue< int, vector<int>, greater<int> > mnpq;
//
//
//int modular(int a,int b,int c){
//    if(b==0){
//        return 1;
//    }
//    if(b%2==0){
//        return modular(((a*a)%c),b/2,c);
//    }else{
//        return ((a%c)*(modular(((a*a)%c),b/2,c)%c))%c;
//    }
//}
//
//signed main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        string s;
//        cin>>s;
//        int n=s.length();
//        int ans=n;
//        for(int i=0;i<x;i++){
//            char c=s[i];
//            // cout<<c<<endl;
//            int val=(int)(c-48);
//            if(s.length()<x){
//                string temp=s.substr(i+1,s.length()-1-i);
//                // cout<<"temp"<<temp<<endl;
//                for(int j=0;j<(val-1);j++){
//                    s+=(temp);
//                }
//            }
//            // cout<<"fsd"<<s.length()<<endl;
//            int temp2=ans;
//            temp2=(temp2-i+mod)%mod;
//            temp2=(temp2-1+mod)%mod;
//            // val=(val+1)%mod;
//            int temp=(temp2*val)%mod;
//            ans=(temp)%mod;
//            ans=(ans+i)%mod;
//            ans=(ans+1)%mod;
//            // cout<<ans<<endl;
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}