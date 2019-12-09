//
// Created by Saurabh on 12/9/2019.
//

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
void midPrice(int start, int end, vector<int> list, int b);
int index(0), mxValue(0);

int main() {

    int n;
    cin >> n;

    while (n-- > 0) {

        int a(0), b(0), maxNum(0);
        cin >> a >> b;
        mxValue = 0;
        vector<int>list;
        int mn = INT32_MAX;
        int mx = INT32_MIN;

        while (a-- > 0) {
            int temp;
            cin >> temp;
            list.push_back(temp);
            mn = min(mn, temp);
            mx = max(mx, temp);
        }

        if ((mn + b) >= ((mx - b))) {
            cout << mn + b << endl;
        }
        else cout << -1 << endl;
    }
}



