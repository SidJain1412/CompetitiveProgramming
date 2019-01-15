# Given an array, Mister Arr the owner of the array wants to move each element k places
# to its left. I.E. the array a[0],a[1],a[2],...a[n] becomes a[1],a[2]...a[n],a[0]
# after moving one place to the left.
# Note that the first element becomes the last element after each rotation.

# Input Format

# The first line contains two space-separated integers denoting the respective values of n
# (the number of integers) and k (the number of left rotations you must perform).
# The second line contains n space-separated integers describing the respective elements of the array's initial state.

# Sample Input

# 5 4
# 1 2 3 4 5
# Sample Output

# 5 1 2 3 4

a, b = map(int, input().split())
li = list(map(int, input().split()))
newl = []
for i in range(a):
    pos = (i + b)
    if pos >= a:
        pos = pos % a
    newl.append(li[pos])
for i in newl:
    print(i, end=' ')
