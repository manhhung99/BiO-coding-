// http://codeforces.com/problemset/problem/214/A?fbclid=IwAR3h81BQ0XsbpU4OGdNl9AAd0Beor6YfscgExzZ3FkkXg7NtDCUvAegc2eA
#include<iostream>
using namespace std;
int SoSanhBinhPhuong(int,int);
int main(){
    int n,m;
    cin>>n>>m;
    SoSanhBinhPhuong(n,m);
    return 0;
}
int SoSanhBinhPhuong(int n,int m){
    int a,b,Hieu,BinhPhuong;
    int pair=0;
    for(int b=0;b<=n;b++){
        int Hieu=n-b;
        for(int a=0;a<=n;a++){
            int BinhPhuong=a*a;
            if(Hieu==BinhPhuong){
                if(m-a==b*b){
                    pair++;
                }
            }
        }
    }
    cout<<pair;
    return 0;
}