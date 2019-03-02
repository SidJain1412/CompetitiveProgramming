# You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

# You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

# Your task is to fill the bag with exactly W kgs of gold such that the total value of the gold inside the bag is maximum.

# You need not take the entire samples of gold, you can break them down and take fractions of those samples as well. For example, if you have two samples, one with weight 10 and value 10 and another with weight 5 and value 10, you can fill a 5 kg capacity bag with 2.5 kg of first sample and 2.5 kg of second sample. The value for such a bag will be the sum of values of all the pieces, i.e. for the first sample 2.5 kg has value 2.5 and for the second sample 2.5 kg has value 5, hence the total value of the bag becomes 7.5

# INPUT
# First line contains two integers, N and W.
# Second onwards, there are N lines with each of them containing two integers, first one being the weight of the sample and the second one being the value of the sample

# OUTPUT
# Print one number, the maximum attainable value when the bag is filled with W kgs of gold. If it is not possible to fill the bag with W kgs of gold, print -1.

# CONSTRAINTS
# 1 ≤ N ≤ 105
# 1 ≤ W ≤ 109
# 1 ≤ weights, values ≤ 109

# Sample Input 0
# 3 10
# 5 5
# 3 10
# 4 4

# Sample Output 0
# 17.000000000000

n, w = map(int, input().split())
# array to store ratios
vals = []

# to check if total weight of all samples is less than knapsack max weight (print -1 case)
maxw = 0
for i in range(n):
    d = {}
    d['weight'], d['value'] = map(int, input().split())
    maxw += d['weight']
    d['ratio'] = d['value'] / d['weight']
    vals.append(d)

# sorting the dictionary based on ratios
vals_s = sorted(vals, key=lambda x: x['ratio'], reverse=True)

flag = 0

# -1 case:
if(maxw < w):
    print(-1)
else:
    # remaining weight
    remw = w
    i = 0
    # total value
    totval = 0
    while(remw >= 0):
        # if full sample can't be taken
        if(remw - vals_s[i]['weight'] < 0):
            totval += vals_s[i]['value'] * (remw / vals_s[i]['weight'])
        else:
            totval += vals_s[i]['value']
        # reducing remaining weight
        remw -= vals_s[i]['weight']
        # moving to next dictionary
        i += 1

    print(float(totval))
