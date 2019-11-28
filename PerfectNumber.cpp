//
// Created by Saurabh on 11/27/2019.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool checkDigit(int num);

int main() {

    int a;
    cin >> a;

    long long int num=INT32_MAX;

    if(a==1){
        std::cout<<19<<endl;
        return 0;
    }
    if(a==2) {
        std::cout<<28<<endl;
        return 0;
    }

    int count=2;
    int i=29;
    for(;i<num;i++){

        if(checkDigit(i)){
            if(count==a){
                break;
            }
            count++;
        }
    }

    std::cout<<i<<endl;


}

bool checkDigit(int num){

    string number=to_string(num);

    int checkSum=0;
    for(int i=0;i<number.length();i++){

        int a=number[i]-'0';
        checkSum+=a;

        if(checkSum>10) return false;
    }

    if(checkSum==10) return true;

    return false;
}
