//
// Created by SAURABH on 24-03-2020.

//

#include<iostream>

using namespace std;

int power(int a, int b){

    if(b==0) return 1;

   int smaller=power(a,b/2);
   smaller*=smaller;
   if(b&1) smaller*=a;
   return smaller;

}

int main(){

    int a, b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}
