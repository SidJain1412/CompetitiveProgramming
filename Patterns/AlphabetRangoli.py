# You are given an integer, X.
# Your task is to print an alphabet rangoli of size X.
# (Rangoli is a form of Indian folk art based on creation of patterns.)

# Different sizes of alphabet rangoli are shown below:

# #size 3

# ----c----
# --c-b-c--
# c-b-a-b-c
# --c-b-c--
# ----c----

# The center of the rangoli has the first alphabet letter a, and the boundary has the Xth alphabet letter (in alphabetical order).

# Input Format
# Only one line of input containing , the size of the rangoli.

# Constraints
# 0<N<27

# Output Format
# Print the alphabet rangoli in the format explained above.

# Sample Input
# 5

# Sample Output

# --------e--------
# ------e-d-e------
# ----e-d-c-d-e----
# --e-d-c-b-c-d-e--
# e-d-c-b-a-b-c-d-e
# --e-d-c-b-c-d-e--
# ----e-d-c-d-e----
# ------e-d-e------
# --------e-------


def print_rangoli(size):
    # i forgot what i was doing i'm not sure why this works
    for i in range(1, (2 * size) // 2 + 1):
        for j in range((2 * size) - (2 * i)):
            print('-', end='')

        for j in range(i - 1):
            print(chr(97 + size - j - 1), end='')
            print('-', end='')

        for j in range(0, i):
            print(chr(97 + size - i + j), end='')
            if(j < size - 1):
                print('-', end='')

        for j in range((2 * size) - (2 * i) - 1):
            print('-', end='')
        print()

    for i in range(1, (2 * size) // 2):
        for j in range(2 * i):
            print('-', end='')

        for j in range(0, size - i - 1):
            print(chr(97 + size - j - 1), end='')
            print('-', end='')

        for j in range(0, size - i):
            print(chr(97 + j + i), end='')
            if(j < size - 1):
                print('-', end='')

        for j in range(2 * i - 1):
            print('-', end='')
        print()


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
