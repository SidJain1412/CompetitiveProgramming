# Gas Stations

# There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

# You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

# Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print -1.

# You can only travel in one direction. i to i+1, i+2, ... n-1, 0, 1, 2.. Completing the circuit means starting at i and ending up at i again.

# Input Format

# First line contains the number of gas stations N.
# Second line contains N integers, the ith of them denoting gas[i].
# Third line contains N integers, the ith of them denoting cost[i].

# Constraints

# 1 <= N <= 105

# Output Format

# Print the minimum starting gas station’s index if you can travel around the circuit once, otherwise print -1.

# Sample Input 0

# 2
# 1 2
# 2 1
# Sample Output 0

# 1

n=int(input())
gas = list(map(int, input().split()))
cost = list(map(int, input().split()))
sg=sum(gas)
sc=sum(cost)
if sc>sg:
    print("-1")
else:
    tank=0
    pos=-1
    count=0
    i=0
    while(True):
        if tank==0:
            tank+=gas[i]
        if i!=len(gas)-1:
            if tank-cost[i]>=0:
                tank=tank-cost[i]+gas[i+1]
                count=count+1
                if count==len(gas):
                    pos=i+1
                    break
                i=i+1
            else:
                if count==len(gas)-1:
                    break
                else:
                    tank=0
                    count=0
                    i+=1
        else:
            if tank-cost[i]>=0:
                tank=tank-cost[i]+gas[0]
                count+=1
                i=0
                if(count==n):
                    pos=i
                    break
            else:
                break
    print(pos)
