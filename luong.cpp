#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    long long x;
    double a;
    long t;
    cin>>x>>a>>t;
    if(x>0 && x<pow(10,8)){
        if(a>0.0 && a<10.0){
            if(t>=0 && t<=pow(10,7)){
                double luong =a*x+t;
                cout<<fixed<<setprecision(2)<<luong;
            }
        }
    }
    return 0;
}