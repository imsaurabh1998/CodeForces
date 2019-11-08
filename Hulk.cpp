//
// Created by SAURABH on 07-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    string odd="I hate";
    string even="I love";
    string between="that";
    string suffix="it";
    string rStr="";
    int i=1;
    while(i<=n){

        if(i%2==0){
            rStr+=even;
        }else{
            rStr+=odd;
        }

        i++;
        if(i<=n) rStr+=" "+between+" ";
    }

    rStr+=" "+suffix;

    cout<<rStr<<endl;

    return 0;
}
