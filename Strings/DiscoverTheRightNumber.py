'''
Given a column title as appears in an Excel Spreadsheet, return its corresponding column number.
For Example :

    A -> 1
    B -> 2
    ....
    ....
    Z -> 26
    AA -> 27
Input Format

One string denoting the column title of an excel spreadsheet.

Constraints

The answer will always fit in a 32-bit integer.

Output Format

Output an integer.

Sample Input 0

AA
Sample Output 0

27
'''


a = input()
l = []
b = 0
t = 0
for i in a:
    l = l + [i]
while(l):
    a = l.pop()
    if t == 0:
        b = b + (ord(a) - 64)
    else:
        b = b + (ord(a) - 64) * pow(26, t)
    t = t + 1
print(b)
