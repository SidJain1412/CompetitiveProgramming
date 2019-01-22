# Pyramid by Numericals

# Identify the logic behind the series

# 6 28 66 120 190 276....

# The numbers in the series should be used to create a Pyramid. The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words there will be N numbers on the bottom layer of the pyramid.

# The Pyramid construction rules are as follows
# 1. First number in the series should be at the top of the Pyramid
# 2. Last N number of the series should be on the bottom-most layer of the Pyramid, with Nth number being the right-most number of this layer.
# 3. Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.

# Example

# If input is 2, output will be

#  00006
# 00028 00066

# If input is 3, output will be

#   00006
#  00028 00066
# 00120 00190 00276
# Input Format

# First line of input will contain number N that corresponds to the width of the bottom-most layer of the Pyramid

# Constraints

# 0 < N <= 14

# Output Format

# The Pyramid constructed out of numbers in the series as per stated construction rules

# Sample Input 0

# 2
# Sample Output 0

#  00006
# 00028 00066
# Sample Input 1

# 3
# Sample Output 1

#   00006
#  00028 00066
# 00120 00190 00276

# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
sum=0
for i in range(n+1):
    sum+=i
l=[]
l.append(6)
for i in range(1,sum):
    a=6+l[i-1]+16*(i)
    l.append(a)
# print(l)
# print("{:05d}".format(x))
t=0
for i in range(n+1):
    for j in range(n,i+1,-1):
        print(" ",end='')
    for k in range(i+1):
        print("{:05d}".format(l[t]),end=' ')
        t+=1
    print()