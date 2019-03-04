# Exclusive OR

# Find the XOR of two numbers and print it.

# Hint : Input the numbers as strings.

# Input Format

# First line contains first number X and second line contains second number Y.
# The numbers will be given to you in binary form.

# Constraints

# 0 <= X <= 2^1000
# 0 <= Y <= 2^1000

# Output Format

# Output one number in binary format, the XOR of two numbers.

# Sample Input 0

# 11011
# 10101
# Sample Output 0

# 01110

# Enter your code here. Read input from STDIN. Print output to STDOUT
a = input()
b = input()
ab = int(a,2)
bc = int(b,2)
x = len(a)
y = len(b)
if x>y:
    m=x
else:
    m=y
ans = ab^bc
print("{0:b}".format(ans).zfill(m))