
def SearchNextRound(ListScore,Location):
    NumberNextRound=0
    MinScore=ListScore[Location-1]
    if(MinScore==0):
        for i in range(0,len(ListScore)):
            if(ListScore[i]>MinScore):
                NumberNextRound+=1
        print(NumberNextRound)
    else:
        for i in range(0,len(ListScore)):
            if(ListScore[i]>=MinScore):
                NumberNextRound+=1
        print(NumberNextRound)
if __name__ == "__main__":
    NumberParticipant,Location=map(int,input().split())
    ListScore=list(map(int,input().split()))
    SearchNextRound(ListScore,Location)