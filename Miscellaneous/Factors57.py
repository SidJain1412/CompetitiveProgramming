# Factor57

# Develop a Python method change(amount) that for any integer amount in the range from 24 to 1000 
# returns a list consisting of numbers 5 and 7 only, such that their sum is equal to amount.
# For example, change(28) may return [7, 7, 7, 7], while change(49) may return [7, 7, 7, 7, 7, 7, 7] 
# or [5, 5, 5, 5, 5, 5, 5, 7, 7] or [7, 5, 5, 5, 5, 5, 5, 5, 7].

def change(amount):
    if not (24 <= amount <= 1000):
        return [0]
    k = int(3 * amount / 7)
    return [5] * (3*amount-7*k) + [7] * (5*k-2*amount)
    
# print(change (24))
# print(change (28))
# print(change (49))
# print(change (55))
n = int(input())
print(change(n))