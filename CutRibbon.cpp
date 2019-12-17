//
// Created by SAURABH on 10-11-2019.
//

#include<iostream>
#include<map>

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

cout<<cutRibbon(n);

return 0;
}

int cutRibbon(int n){

    if(n==0){
        return 1;
    }
    if(n<0) return 0;

    return max(cutRibbon(n-a),max(cutRibbon(n-b),cutRibbon(n-c)));
}
