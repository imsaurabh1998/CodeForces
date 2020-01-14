////
//// Created by Saurabh on 1/14/2020.
////
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef unsigned long long int ll;
//int Tval=100000;
//int allPrimes[100000]={1};
//void allPrime(){
//    allPrimes[0]=0;
//    allPrimes[1]=0;
//
//    for(int i=2;i<=sqrt(Tval);i++){
//
//        if(allPrimes[i]==0){
//            for(int j=2;i*j<=Tval;j++){
//                allPrimes[i*j]=0;
//            }
//        }
//    }
//}
//
//int findNdivisor(ll N){
//
//    int ans=1,count=1;
//
//    for(int i=2;i<N;i++){
//
//        ll v=allPrimes[i];
//        if(v==1){
//
//            if((v*v*v)>N)  break;
//
//            count=1;
//            while(N%v==0){
//                N=N/v;
//                count+=1;
//            }
//            ans*=count;
//        }
//    }
//
//    if(allPrimes[N]) ans*=2;
//    else if(allPrimes[(int)sqrt(N)]) ans*=3;
//    else if(N!=1) ans*=4;
//
//    return ans;
//}
//int main(){
//
//    int n;
//    cin>>n;
//
//    vector<int> list;
//
//    while(n-->0){
//        int t;
//        cin>>t;
//        list.push_back(t);
//    }
//    allPrime();
//
//    for(int i =0;i<n;i++){
//
//       cout<<findNdivisor(list[i])<<" ";
//    }
//}


#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define int long long

const int N=1e6+5;
const int MOD=1e9+7;

int n, a[N], cnt[N], ans=0;

int32_t main()
{
    IOS;
    cin>>n;
    cnt[0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        vector<int> cur;
        for(int j=1;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                cur.push_back(j);
                if(j != a[i]/j)
                    cur.push_back(a[i]/j);
            }
        }
        sort(cur.begin(), cur.end());
        reverse(cur.begin(), cur.end());
        for(auto &a : cur) cout<<a<<" ";
        for(auto &it:cur)
        {
            cnt[it]+=cnt[it-1];
            cnt[it]%=MOD;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
        ans+=cnt[i];
    ans %= MOD;
    cout<<ans;
    return 0;
}