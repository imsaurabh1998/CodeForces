//
// Created by Saurabh on 11/6/2019.
//

#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){

    string value;
    cin>>value;
    bool flag=false;

    string rStr="";
    string s="";
    for(int i=0;i<value.length();i++){

        if(i<value.length()-2)
         s=value.substr(i,3);
        else{
            s=value[i];
        }

        if(s=="WUB") {
            i+=2;
            if(rStr.length()>0 && i<value.length()){
                rStr+=" ";
            }
            continue;
        }

        rStr+=value[i];

    }

   cout<<rStr<<endl;
    return 0;
}

