//
// Created by SAURABH on 18-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    if(n<k){
        cout<<-1<<endl;
        return 0;
    }
    if(n==k) {
        cout<<n<<endl;
        return 0;
    }

    int quotent=n/2;
    int rem=n%2;

    int minStep=quotent+rem;

    int result=(minStep%k==0) ? minStep: (minStep+(k-minStep%k));

    cout<<result<<endl;
}