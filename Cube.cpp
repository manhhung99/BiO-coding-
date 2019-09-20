// http://codeforces.com/contest/492/problem/A
    #include<iostream>
    using namespace std;
     
    int main(){
        int linereal=0;
        int linefake=0;
        int NumberCubeInput;
        cin>>NumberCubeInput;
        int NumberCubeUse=0;
        while((NumberCubeInput>=1)&&(NumberCubeInput<=10000)){
            linefake++;
            int NumberCubeInLine=0;
            for(int i=0;i<=linefake;i++){
                NumberCubeInLine+=i;
            }
            NumberCubeUse+=NumberCubeInLine;
            if(NumberCubeUse>NumberCubeInput){
                break;
            }
            linereal++;
        }
        cout<<linereal;
        return 0;
    }