// https://codeforces.com/contest/75/problem/A?fbclid=IwAR3zINf-SLyzuX-bDLEGi-G7ihF2gEuctAB094iyCdggIfbKKn5IgtSJmd8
#include<iostream>
using namespace std;

int LifeWithoutZeros(int, int);
int NumberWithoutZero(int );
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    LifeWithoutZeros(a,b);
    return 0;
}

int LifeWithoutZeros(int a,int b){
    int flag=1;
    int c=a+b;
    int a0=NumberWithoutZero(a);
    int b0=NumberWithoutZero(b);
    int c0=NumberWithoutZero(c);
    if(a0+b0==c0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
int NumberWithoutZero(int n){
    int du;
    int capnhan=1;
    int t=n;
    int NewNumber=0;
    while(t>0){
        du=t%10;
        if(du!=0){
            NewNumber=NewNumber+du*capnhan;
            t=t/10;
            capnhan=capnhan*10;
        }
        else{
            NewNumber=NewNumber+du*capnhan;
            t=t/10;
            capnhan=capnhan;
        }
    }
    return NewNumber;
}