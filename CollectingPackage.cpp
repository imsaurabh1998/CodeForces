//
// Created by SAURABH on 23-01-2020.
//

#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x,y;
}p[1005];

bool comp(Point x,Point y){

    return x.x+x.y<y.x+y.y;
}

int main(){

    int tCase;
    cin>>tCase;

    while(tCase-->0){

        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>p[i].x>>p[i].y;
        }

        sort(p,p+n,comp);

            int flag=1;
        for(int i =1;i<n;i++){

            if(p[i].x<p[i-1].x ||  p[i].y<p[i-1].y){
                flag=0;
                break;
            }
        }

        if(!flag){
            cout<<"NO"<<endl;

        }else {
            int xRow = 0, yRow = 0;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {

                while (xRow < p[i].x) {
                    cout << "R";
                    xRow++;
                }

                while (yRow < p[i].y) {
                    cout << "U";
                    yRow++;
                }
            }
            cout << endl;
        }
    }
}

