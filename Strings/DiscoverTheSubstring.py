# Discover the Substring

# strstr is a function that returns 1 if one string is present as substring in another and 0 otherwise. You are to write a program to print the number of times one string is present in the other as a substring.

# Input Format

# Two lines of input consisting of two strings.

# Constraints

# 1 <= length of strings <= 100

# Output Format

# Output one number, the number of times any one string appears in the other.

# Sample Input 0

# banana
# ana
# Sample Output 0

# 2
# Explanation 0

# b(ana)na and ban(ana) so answer is 2

# Sample Input 1

# a
# adamant
# Sample Output 1

# 3
# Explanation 1

# (a)damant, ad(a)mant and adam(a)nt. So answer is 3.

# Enter your code here. Read input from STDIN. Print output to STDOUT
s,sb= input(),input()
if len(sb)>len(s):
    sb,s=s,sb

results = 0
sub_len = len(sb)
for i in range(len(s)):
    if s[i:i+sub_len] == sb:
        results += 1
print(results)