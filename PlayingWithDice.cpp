//
// Created by SAURABH on 03-12-2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int first(0),draw(0),second(0);
    int fChance,sChance;

    for(int i=1;i<=6;i++){
        fChance=abs(n-i);
        sChance=abs(m-i);

        if(fChance==sChance) draw++;
        else if(fChance<sChance) first++;
        else second++;

    }

    cout<<first<<" "<<draw<<" "<<second;
}

