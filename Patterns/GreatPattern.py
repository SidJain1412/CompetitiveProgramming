# Great Pattern

# Your task is simple, write a program in Java to print the following pattern :

# N = 1
# 1

# N = 2
#   1
# 1 2 1
#   1
  
# N = 3
#     1
#   1 2 1
# 1 2 3 2 1
#   1 2 1
#     1
    
# and so on..
# INPUT
# Input consists of many test cases. 
# First line contains the number of test case T. 
# Each of the test case lines consists of one number N for that test case.

# OUTPUT
# Print the pattern corresponding to the N value of each test case. 
# Print a blank line between two test case outputs.

# CONSTRAINTS
# 1 ≤ T, N ≤ 10

# Sample Input 0

# 3
# 1
# 2
# 3
# Sample Output 0

# 1

#   1
# 1 2 1
#   1
  
#     1
#   1 2 1
# 1 2 3 2 1
#   1 2 1
#     1

testcase=int(input())
if testcase==0:
    print("0")
else:
    for i in range(testcase):
        n=int(input())
        if(n==0):
            print()
            continue
        t=1
        for i in range(n,1,-1):
            for j in range(1,i):
                print(" ",end=' ')
            for k in range(1,t+1):
                print(k,end=' ')
            for k in range(t-1,0,-1):
                print(k,end=' ')
            '''for s in range(1,i):
                print(" ",end=' ')'''
            t+=1
            print()
        a=0
        for i in range(n,0,-1):
            for k in range(0,a):
                print(" ",end=' ')
            a+=1
            for j in range(1,i+1):
                print(j,end=' ')
            for l in range(i-1,0,-1):
                print(l,end=' ')
            print()
        print()