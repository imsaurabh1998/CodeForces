//
// Created by SAURABH on 12-12-2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
//#include<bits/stdc++.h>
#include<set>
//#include<math.h>


typedef  long long int ll;
using namespace std;

int main() {

    int n,k;
    cin >> n>>k;

    map<char,int> m;

    string s;
    cin >> s;

    while(k-->0)
    {

        char temp;
        cin >> temp;
        m[temp]++;
    }

    if(m.size()==26)
    {
        cout << (n * (n + 1)) / 2 << endl;
        return 0;
    }

    vector<string> list;
    string res;

    for(int i=0;i<s.length();i++)
    {

        if(m[s[i]]>0)
        {
            res += s[i];
        }else
        {
            list.push_back(res);
            res = "";
        }
    }
    list.push_back(res);

    ll count = 0;
    for(string value : list)
    {
        count += (value.length() * (value.length()+1)) / 2;
    }

    cout << count << endl;



}

