//
// Created by Saurabh on 11/5/2019.
//

#include<iostream>
#include <vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){

    int a, b,c;

    cin>>a>>b>>c;

//    int count_1=0;
//
//    if(a==1) count_1++;
//    if(b==1) count_1++;
//    if(c==1) count_1++;
//
//    if(count_1>1){
//        cout<<(a+b+c)<<endl;
//        return 0;
//    }else if((a>b && a>c && count_1==1)||(a>c && b>c&& count_1==1)){
//        cout<<(a*(b+c))<<endl;
//        return 0;
//    }
//    else if(count_1==1){
//
//        cout<<((a+b)*c)<<endl;
//    }
//    else{
//        cout<<(a*b*c)<<endl;
//
//
//    }

    int m=INT32_MIN;

    int val=0;

    val=a+b+c;
    m=max(m,val);
    val=a*(b+c);
    m=max(m,val);
    val=(a+b)*c;
    m=max(m,val);
    val=a*b*c;
    m=max(m,val);
    val=a+(b*c);
    m=max(m,val);

    cout<<m<<endl;
    return 0;




    return 0;
}
