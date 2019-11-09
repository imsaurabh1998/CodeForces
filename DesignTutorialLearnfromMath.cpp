//
// Created by SAURABH on 09-11-2019.
//

#include<iostream>

using namespace std;
bool checkPrime( int n);
int main(){

    int number;
    cin>>number;
    bool flag;

    for(int i=4;i<INT16_MAX && i<number;i++){

        flag=checkPrime(i);
        cout<<flag<<" ";
        if(flag) {
            //cout<<i<<": "<<flag;
            int temp = number - i;

            flag = checkPrime(temp);

            if (flag) {
                cout << i << " " << temp << endl;
                return 0;
            }
        }
    }
}

bool checkPrime( int n){

    for(int i=2;i<=9;i++){
        if(n%i==0) return true;

    }

    return false;

}

