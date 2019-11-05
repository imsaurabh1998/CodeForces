//
// Created by SAURABH on 02-11-2019.
//

#include<iostream>


using namespace std;

int onTable(string a);

int main(){

    string a ;
    int n;
    cin>>n>>a;

    cout<<onTable(a);
}

int onTable(string a){

    int count=0;
    int maxCount=0;

//    for(int i=0;i<a.length()-1;i++){
//
//
//
//        if(a[i]==a[i+1]) count++;
//        else {
//
//
//            count=0;
//        }
//
//        if(maxCount<count)
//            maxCount=count;
//    }
//
//    return maxCount;


        int Rcount=0;
        int Gcount=0;
        int Bcount=0;

        for(int i=0;i<a.length()-1;i++){

            if(a[i]==a[i+1]){

                if(a[i]=='R') Rcount++;
                else if(a[i]=='G') Gcount++;
                else if(a[i]=='B') Bcount++;
            }
        }


       maxCount=Rcount+Gcount+Bcount;


        return maxCount;
}

