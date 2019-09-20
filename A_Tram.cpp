// lhttp://codeforces.com/problemset/problem/116/A?fbclid=IwAR24c3K619tnoCe5crSCsDVZBTGjn2AA5-rVC-VRpsBrTK5SSdIcPkhfdF4
#include<iostream>
using namespace std;

int main(){
    int StationNumber;
    int PeopleExit,PeopleEnter;
    int PeopleMaxInCar=0;
    int PeopleInSide=0;
    cin>>StationNumber;
    if((StationNumber>=2)&&(StationNumber<=1000)){
        int count=0;
        cin>>PeopleExit>>PeopleEnter;
        while((PeopleExit,PeopleEnter>=0)&&(PeopleExit,PeopleEnter<=1000)){
            PeopleInSide-=PeopleExit;
            if(PeopleMaxInCar<=PeopleInSide){
                PeopleMaxInCar=PeopleInSide;
            }
            PeopleInSide+=PeopleEnter;
            if(PeopleMaxInCar<=PeopleInSide){
                PeopleMaxInCar=PeopleInSide;
            }
            count++;
            if(count==StationNumber){
                break;
            }
            cin>>PeopleExit>>PeopleEnter;
        }
        cout<<PeopleMaxInCar;
    }  
    return 0;
}
