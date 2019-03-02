# Contacts Application

# Your task is to design a contacts application that supports two features :

# add name where name is a string that denotes the name of the contact. This operation must store a new contact by the name name.

# find partial where partial is a string denoting a part of the name to search for in the directory. It must count the number of contacts that start with partial and print the count.

# You are given n sequential operations of either type 1 or type 2. You are expected to perform them in the order given.

# Input Format

# The first line contains a single integer, n , denoting the number of operations to perform. Each line i of the n subsequent lines contains an operation in one of the two forms defined above.

# Constraints

# 1 <= n <= 105
# 1 <= |name|, |partial| <= 21
# It is guaranteed that name and partial contain lowercase english letters only.
# Output Format

# For each find partial operation, print the number of contact names starting with partial on a new line.

# Sample Input 0

# 4
# add hack
# add hackerrank
# find hac
# find hak
# Sample Output 0

# 2
# 0

# Enter your code here. Read input from STDIN. Print output to STDOUT
def check(string, sub_str): 
    if (string.find(sub_str) == -1): 
        return("NO") 
    else: 
        return("YES") 
n = int(input())
l=[]
for i in range(n):
    act = input()
    l.append(act)
names=[]
search=[]
for x in l:
    cmd,name = x.split()
    if(cmd=='add'):
        names.append(name)
    if(cmd=='find'):
        search.append(name)
# print(names)
# print(search)
ct=0
for i in search:
    ct=0
    for j in names:
        if(check(i,j)=="YES"):
            ct+=1
    print(ct)