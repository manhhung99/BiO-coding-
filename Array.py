# https://codeforces.com/problemset/problem/300/A?fbclid=IwAR06idFIt0afeAORtM3EsEow9jkODFC8h_5MBhZyZ4Fp8zYvM6eyinPBKMo

def DivideArray(Array):
    NegativeArray=[]
    PositiveArray=[]
    ZeroArray=[]
    for i in range(0,len(Array)):
        if(Array[i]<0):
            NegativeArray.append(Array[i])
        if(Array[i]>0):
            PositiveArray.append(Array[i])
        if(Array[i]==0):
            ZeroArray.append(Array[i])
    if(len(PositiveArray)==0):
        PositiveArray.append(NegativeArray[-1])
        PositiveArray.append(NegativeArray[-2])
        NegativeArray.pop() #clear tail_app
        NegativeArray.pop()
    if(len(NegativeArray)%2==0):
        ZeroArray.append(NegativeArray[-1])
        NegativeArray.pop()
    return NegativeArray,PositiveArray,ZeroArray
def display(arr):
    print(len(arr),end=" ")
    for i in range(len(arr)):
        print(arr[i],end=" ")
    print(" ")
    return 0


if __name__ == "__main__":
    Size=int(input())
    Array=list(map(int,input().split()))
    Neg,Pos,Zero=DivideArray(Array)
    display(Neg)
    display(Pos)
    display(Zero)
    DivideArray(Array)
