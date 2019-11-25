//
// Created by SAURABH on 19-11-2019.
//

#include<iostream>
#include <vector>
#include <algorithm>
#include<map>


using namespace std;



int main() {


    int two, three, five, six;
    cin >> two>> three>> five>> six;

    int min1 = min(two, min(five, six));


    vector<int> list;
    int a=1;

    int result = 0;
    result += 256 * min1;

    two -= min1; five -= min1; six -= min1;

    /*while (min1-- > 0) {
        a = a *  2;
        a = a * 10 + 5;
        a = a * 10 + 6;
        list.push_back(a);
        a = 1;

        two--; five--; six--;
    }*/

    int min2 = min(three, two);

    result += 32 * min2;
    two-=min2; three-=min2;
    /*while (min2-- > 0) {
        a = a * 3;
        a = a*10 + 2;
        list.push_back(a);
        a = 1;
        two--; three--;
    }*/

    /*int result = 0;
    for (int t : list) {
        result += t;
    }*/
    //cout << two << " " << three << " " << five << " " << six << endl;
    cout << result << endl;


}