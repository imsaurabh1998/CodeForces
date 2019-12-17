//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>
#include<map>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int cutRibbon(int a);

int a, b,c;

int main(){

    int n;
    cin>>n>>a>>b>>c;

//    map<int,int> m;
//    int num[3];
//    num[0]=a;
//    num[1]=b;
//    num[2]=c;
//    for(int i=0;i<3;i++){
//        int n=num[i];
//        if(m.find(n)==m.end()){
//            m.insert(pair<int,int>(n,1));
//        }else{
//            m[n]++;
//        }
//    }

//    if(n>(a+b+c)){
//        cout<<n<<endl;
//        return 0;
//    }else if(n==(a+b+c)){
//        cout<<"3"<<endl;
//        return 0;
//    }
//    else if(n>=(a+b)){
//        cout<<"2"<<endl;
//        return 0;
//    }else if(n>=(a+c)){
//        cout<<"2"<<endl;
//        return 0;
//    }else if(n>=(b+c)){
//        cout<<"2"<<endl;
//        return 0;
//    }else{
//        cout<<"1"<<endl;
//
//    }

//cout<<cutRibbon(n);

vector<int> list;
list.push_back(a);
list.push_back(b);
list.push_back(c);

sort(list.begin(),list.end());

a=list[0];
b=list[1];
c=list[2];


    if(n%a==0){
        cout<<n/a<<endl;
    }else{

        int rem=n%a;
        int total=(n/a)*a;
        int count=n/a;
        while(true){

            if((n-total)%b==0){

                count+=(n-total)/b;
                break;
            }else if((n-total)%c==0){
                count+=(n-total)/c;
                break;
            }
            total-=a;
            count--;
        }
        cout<<count<<endl;
    }



return 0;
}

int cutRibbon(int n){

    if(n==0){
        return 1;
    }
    if(n<0) return 0;

    return max(cutRibbon(n-a),max(cutRibbon(n-b),cutRibbon(n-c)));
}
