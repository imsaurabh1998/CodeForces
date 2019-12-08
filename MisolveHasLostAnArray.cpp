//
// Created by SAURABH on 07-12-2019.
//

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {

    int n, k, m;
    cin >> n >> k >> m;

   // vector<int> list(n), list1(n);

    int MinLastNumber = pow(2, k-1);
    int MaxLastNumber = 1;
    int count = 1;
    int countMin = 0;
    int countMax = 0;

    for (int i = n - 1,j=0; i >= 0,j<n; --i,j++) {

//        list[i] = MinLastNumber;
//        list1[j] = MaxLastNumber;

        countMin += MinLastNumber;
        countMax += MaxLastNumber;
        if (MinLastNumber != 1)
            MinLastNumber /= 2;

        if (count != m) {
            MaxLastNumber *= 2;
            count++;
        }
    }

    /*for (int i = 0; i < list.size(); i++) {

        cout << list[i] << " : " << list1[i] << endl;
    }*/

    cout << countMin << " " << countMax << endl;


}


