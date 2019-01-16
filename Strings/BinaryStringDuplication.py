# http://codesfiction.com/hackerrank-week-of-code-32-duplication/

# Consider a binary string, s, with an initial value of "0". We expand s by performing the following steps:

# Create a string, t, where each character ti is equal to 1 - si. For example, if s = "01", then t = "10".
# Note that s and t always have the same length because t is the complement of s.
# Append t to the end of s so that s(new) = s + t. In the example above, "01" becomes "0110".
# We keep on expanding s using steps 1 and 2 infinitely.
# When we repeat the expansion operation, string s grows like this:

# Example: String on step 4: 0110100110010110

# Given queries in the form of a zero-based index, , solve each query by printing the character at index in on a new line.

# Input Format

# The first line contains an integer denoting q (number of queries).
# Each of the q subsequent lines contains an integer describing the value of x for a query.

# Constraints

# 0 <= x, q <= 1000

# Output Format

# For each query, print the value of s[x] (i.e., either 1 or 0) on a new line.

# Sample Input

# 3
# 2
# 5
# 7
# Sample Output

# 1
# 0
# 1
n = int(input())
li = []
for i in range(n):
    li.append(int(input()))

s = '0'
lastc = 1
while(len(s) <= max(li)):
    news = ''
    for i in range(0, lastc):
        news += str(abs(int(s[i]) - 1))
    s += news
    lastc *= 2

for i in li:
    print(s[i])
