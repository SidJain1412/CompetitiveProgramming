# Mr. Vincent works in a door mat manufacturing company.
# One day, he designed a new door mat with the following specifications:

# Mat size must be NxM. (N is an odd natural number, and M is 3 times N.)
# The design should have 'WELCOME' written in the center.
# The design pattern should only use '|', '.' and '-' characters.

# Sample Designs

#     Size: 7 x 21
#     ---------.|.---------
#     ------.|..|..|.------
#     ---.|..|..|..|..|.---
#     -------WELCOME-------
#     ---.|..|..|..|..|.---
#     ------.|..|..|.------
#     ---------.|.---------

#     Size: 11 x 33
#     ---------------.|.---------------
#     ------------.|..|..|.------------
#     ---------.|..|..|..|..|.---------
#     ------.|..|..|..|..|..|..|.------
#     ---.|..|..|..|..|..|..|..|..|.---
#     -------------WELCOME-------------
#     ---.|..|..|..|..|..|..|..|..|.---
#     ------.|..|..|..|..|..|..|.------
#     ---------.|..|..|..|..|.---------
#     ------------.|..|..|.------------
#     ---------------.|.---------------

# Input Format

# A single line containing the space separated values of N and M.

# Constraints
# 5<N<101
# 15<M<303

# Sample Input

# 9 27
# Sample Output

# ------------.|.------------
# ---------.|..|..|.---------
# ------.|..|..|..|..|.------
# ---.|..|..|..|..|..|..|.---
# ----------WELCOME----------
# ---.|..|..|..|..|..|..|.---
# ------.|..|..|..|..|.------
# ---------.|..|..|.---------
# ------------.|.------------

# CODE:

# Taking input
x, y = map(int, input().split())

# des2 for printing '.|.'
des2 = 1
dashes = (y - (3 * des2)) // 2

# top half
for j in range(1, (x // 2) + 1):
    # dashes
    for i in range(dashes):
        print('-', end='')
    # .|. pattern
    for i in range(des2):
        print('.|.', end='')
    # dashes on right side
    for i in range(dashes):
        print('-', end='')
    des2 = (j * 2) + 1
    dashes = (y - (3 * des2)) // 2
    print()

# middle line (WELCOME)
dashes = (y - 7) // 2
for i in range(dashes):
    print('-', end='')
print("WELCOME", end='')
for i in range(dashes):
    print('-', end='')
print()

# Bottom half
dashes = 3

for j in range((x // 2) - 1, -1, -1):
    des2 = (j * 2) + 1
    for i in range(dashes):
        print('-', end='')
    for i in range(des2):
        print('.|.', end='')
    for i in range(dashes):
        print('-', end='')
    dashes = dashes + 3
    print()
