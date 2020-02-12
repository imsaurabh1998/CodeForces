//
// Created by Saurabh on 2/12/2020.
//
#include<bits/stdc++.h>

using namespace std;

#define sp << " " <<
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define int long long
#define double long double
#define INF 1e18
#define PI 3.14159265359



int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        pair<int,int> a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i].first;
            a[i].second=i+1;
        }
        int s=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
            s+=a[i].first;
        s*=2;
        if(m<n||n==2)
        {
            cout << -1 << endl;
        }
        else
        {
            m-=n;
            cout << s+m*(a[0].first+a[1].first) << endl;
            for(int i=0;i<m;i++)
            {
                cout << a[0].second sp a[1].second << endl;
            }
            for(int i=0;i<n;i++)
            {
                cout << i%n+1 sp (i+1)%n+1 << endl;
            }
        }
    }
    return 0;
}
