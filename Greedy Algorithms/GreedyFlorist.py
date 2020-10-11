# Very long question, please view here
# https://www.hackerrank.com/challenges/greedy-florist/problem
import os

# Complete the getMinimumCost function below.


def getMinimumCost(k, c):
    # Reverse sort
    c = sorted(c, reverse=True)
    cost = 0
    # Adding first k costs directly (1 flower per person)
    cost += sum(c[:k])
    # Changing array to store only next elements
    c = c[k:]
    # Cost multiplication starts at 2
    mult = 2
    # Counting how many flowers bought
    count = 0
    for price in c:
        # Adding that price
        cost += price * mult
        # Increasing count of flowers bought
        count += 1
        # When all group members have bought one each, then cost will get incremented again
        if(count % k == 0):
            mult += 1

    return cost


# generic hackerrank input
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    minimumCost = getMinimumCost(k, c)

    fptr.write(str(minimumCost) + '\n')

    fptr.close()
