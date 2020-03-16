//
// Created by Saurabh on 3/16/2020.
//


#include<bits/stdc++.h>

using namespace std;

int EuclidGCD(int a, int b){

    if(b==0) return a;

    EuclidGCD(b,a%b);
}

int LCM(int a, int b){

    return a*b/EuclidGCD(a,b);
}

int x, y,GCD;
void ExtendedEuclid(int a, int b){

    if(b==0){
        x=1,y=0;
        GCD=a;
        return;
    }
    ExtendedEuclid(b,a%b);

    int Cx=y;
    int Cy=x-(a/b)*y;

    x=Cx,y=Cy;
}
int main(){

    cout<<"Find out the GCD , LCM & ExtendedEuclidAlgo Values\n";

    cout<<"GCD of a and b "<<EuclidGCD(6,12)<<endl;
    cout<<"LCM of a and b "<<LCM(6,12)<<endl;
    ExtendedEuclid(18,30);
    cout<<"ExtendedEuclid value of x and y "<<x <<" and "<<y <<endl;

}
