# Fibonacci Series is the sequence where every term is the sum of 2 previous terms.
# Formally, Fn = Fn-1 + Fn-2
# with F0 = 0 and F1 = 1.

# Your task is for a given number N print the Nth Fibonacci number.
# You must use recursion to find the fibonacci number.

# Input Format

# One number N.

# Constraints

# 0 <= N <= 12

# Output Format

# One number Fn.

# Sample Input
# 0

# Sample Output
# 0


fibl = [0, 1]


def fib(a, b, n):
    if(len(fibl) < n + 1):
        fibl.append(a + b)
        fib(fibl[-1], fibl[-2], n)


n = int(input())
fib(fibl[-1], fibl[-2], n)
print(fibl[n])
