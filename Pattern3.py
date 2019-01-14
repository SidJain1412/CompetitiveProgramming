# Input can only be odd
# Input

# 11
# Output

# 1         11
#  2       10
#   3     9
#    4   8
#     5 7
#      6

n = int(input())
num_lines = (n // 2) + 1

for i in range(1, num_lines + 1):
    print(' ' * (i - 1), end='')
    print(i, end='')
    print(' ' * ((num_lines - i) * 2 - 1), end='')
    if i != num_lines:
        print(n - i + 1)
