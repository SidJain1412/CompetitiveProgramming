/*
GCD, not exactly

In math, GCD, the greatest common divisor is an easy task to calculate for 2 positive numbers.

A common divisor of two positive numbers is a number which divides both numbers.

However your teacher decides to give you a more difficult task, in this task you need to find the largest divisor d between two integers a and b that is in a given range from low to high (inclusive), i.e. low ≤ d ≤ high. It is possible that there is no common divisor in the given range.

You will be given the two integers a and b, then n queries. Each query is a range from low to high and you have to answer each query.

Input Format

The first line has a and b, the two integers as described above.

The second line contains one integer n, representing the number of queries.

In the n lines that follow, each line contains one query consisting of two integers, low and high.

Output Format

Print n lines.

The i-th of them should have the result of the i-th query in the input.

If there is no common divisor in the given range for any query, print -1.

Sample Input 0

9 27
3
1 5
10 11
9 11
Sample Output 0

3
-1
9  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd_max(long int n1, long int n2, long int lo, long int hi)
{
    long int i,gcd=-1;
    if(lo>hi)
        return -1;
    for(i=hi;i>=lo;i--)
    {
        if(n1%i==0 && n2%i==0)
            return i;
    }
    return gcd;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n1,n2,n,i,lo,hi;
    scanf("%ld",&n1);
    scanf("%ld",&n2);
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&lo);
        scanf("%ld",&hi);
        int res = gcd_max(n1,n2,lo,hi);
        printf("%d\n",res);
    }
    return 0;
}
notGCDexactly.cpp
Displaying notGCDexactly.cpp.