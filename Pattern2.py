# Sample Input
# 5
# Sample Output
#     1
#    12
#   123
#  1234
# 12345

n = int(input())
num_spaces = n
for i in range(1, n + 1):
    print(' ' * (num_spaces - i), end='')
    for j in range(1, i + 1):
        print(j, end='')
    print()
