// http://codeforces.com/problemset/problem/787/A?fbclid=IwAR1dCeQKZWgvfBaw2QovryqDaOSIGy5U0NiLAHEkBqEkTGi7sLaRlyzKG9w
#include<iostream>
using namespace std;
int ScreamAtTheSameTime(int ,int ,int ,int );
int main(){
    int a,b;
    int c,d;
    cin>>a>>b;
    cin>>c>>d;
    ScreamAtTheSameTime(a,b,c,d);

    return 0;
}

int ScreamAtTheSameTime(int a,int b,int c,int d){
    int TimeAB=0;
    int TimeCD=0;
    int timeab=0;
    int timecd=0;
    while(timeab>=0){
        TimeAB=b+timeab*a;
        while(TimeCD<TimeAB){
            TimeCD=d+timecd*c;
            timecd++;
        }
        timecd=0;
        if(TimeCD==TimeAB){
            cout<<TimeAB;
            break;
        }
        if(timeab==1000){
            cout<<-1;
            break;
        }
        timeab++;
    }
    return 0;
}