//
// Created by Saurabh on 12/3/2019.
//

//https://codeforces.com/problemset/problem/1/B
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <numeric>

#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <thread>
#include <tuple>
#include <limits>
#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>


using namespace std;

int main() {

    int n;
    cin >> n;

    while (n-- > 0) {

        string a;
        cin >> a;
        string strRet = "";
        int nTmp = 0;
        bool bTmp = false;
        for (int i = 0; i < a.size(); i++)
        {
            if (isdigit(a[i]) && !bTmp) { bTmp = true; nTmp++; }
            if (!isdigit(a[i])) { bTmp = false; }
        }
        string temp = "";
        if (nTmp>1) {

            int C = 0;
            int nPos = a.find('C');
            for (int i = nPos + 1; i < a.size(); i++)
            {
                C *= 10;
                C += (a[i] - '0');
            }

            temp = "";
            int i(0);
            while (C > 0) {
                int rem = C % 26;

                if (rem == 0) {
                    temp += 'Z';
                    C = (C / 26) - 1;
                }
                else {
                    temp += (rem - 1) + 'A';
                    C /= 26;
                }
            }
            reverse(temp.begin(), temp.end());
            cout << (temp + a.substr(1,nPos-1)) << endl;


        }
        else if(nTmp==1){
            string R, C;
            int nC = 0, nHex = 1;
            for (int i = 0; i < a.size(); i++)
            {
                if (isalpha(a[i])) { C += a[i]; }
                else { R += a[i]; }
            }
            for (int i = 0; i < C.size(); i++)
            {
                nC += (C[C.size() - i - 1] - 'A' + 1) * nHex;
                nHex *= 26;
            }
            strRet += "R" + R + "C";
            string strTmp = "";
            while (nC)
            {
                strTmp = (char)(nC % 10 + 48) + strTmp;
                nC /= 10;
            }
            strRet += strTmp;

            cout << strRet << endl;
        }
    }
}