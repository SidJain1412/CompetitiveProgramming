# As simple as the title, given a number N, print the number of digits in N!

# N! is defined as : N! = 1*2*3...(N-1)*N

# 0! = 0 and 1! = 1.

# No number ever contains any leading zeros.

# Input Format
# Input contains only one number, N.
# Constraints
# 1 <= N <= 1000

# Output Format
# Output one number that is equal to the number of digits in N!

# Sample Input 0
# 6

# Sample Output 0
# 3

# Explanation 0

# 6! = 1x2x3x4x5x6 = 720 which has 3 digits. So the answer is 3.


import math

x = int(input())
count = 0
if x > 0:
    for i in range(2, x + 1):
        count += math.log10(i)

    print(math.floor(count) + 1)
else:
    print(0)

# Explanation: Take log on both sides. log(1*2*3*4*5*6) = log(1)+log(2)+log(3)... = log(720)
# floor(log(720))+1 = number of digits in the factorial
