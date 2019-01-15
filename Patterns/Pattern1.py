# Sample Input
# 5
# Sample Output

# 1
# 01
# 101
# 0101
# 10101

n = int(input())
temp = 1
for i in range(1, n + 1):
    for j in range(0, i):
        print(temp, end='')
        temp = abs(temp - 1)
    if(i % 2 == 0):
        temp = abs(temp - 1)
    print()
