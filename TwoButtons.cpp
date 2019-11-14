//
// Created by Saurabh on 11/14/2019.
//

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    int n,m;
    cin >> n>>m;
//    int minCount = INT16_MAX;
//
//    if (n > k) {
//        cout << (n - k) << endl;
//        return 0;
//    }
//    else {
//
//        for (int i = n; i >= 1; i--) {
//
//
//            int sum = i;
//            int count = 0;
//
//           // cout << "Value of sum: " << sum << endl;
//
//            while (sum < k) {
//
//                sum *= 2;
//                count++;
//
//                if (sum == k) {
//                    minCount = min(minCount, count+(n-i));
//                   // cout << minCount << endl;
//
//                }
//            }
//
//            if(sum>k){
//                count += (sum - k) + (n - i);
//                minCount = min(minCount, count);
//               // cout << minCount << endl;
//            }
//        }
//    }
//
//    cout << minCount << endl;

        int w(0);

        while(n!=m){

            if(m>n){

                if(m%2==0){
                    m/=2; w++;
                }
                else {
                    m++; w++;
                }
            }else{
                m++; w++;
            }
        }

        cout<<w<<endl;


}

