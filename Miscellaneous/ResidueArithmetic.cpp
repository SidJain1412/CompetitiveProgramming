// Residue Arithmetic

// For operators with large integers, residue arithmetic is used. A residue of a number n modulo a prime p is defined as the remainder obtained when we divide a by p. FOr example, if residue of 100 modulo 3 is 1. Two large primes are chosen and all numbers are expressed as modulo those primes.

// For example, if 7 and 3 were chosen as the primes, 25 would be represented as 4,12 in this representation, 3 would be represented as 3,3, and 30 would be represented as 2,4. Now if we do 25 * 3 - 30 in this model, we do the operation and compute the residue of the result with each of the primes in turn. SO with respect to the prime 7, the result is 4 * 3 - 2 or 10 which has a residue of 3 modulo 7. With respect to 13, the operation is 12 * 3 - 4 = 32 whose residue is 6 modulo 13. Hence the result is 3,6 in the residue notation. There is only one number less than 91 which has this representation, and that is 45, which is what we expect.

// In this problem we will be given 3 numbers a,b and c in residue notation for two primes p and q, and we need to find the value of 2a + b - c in normal notation. It may be assumed that the result is less than p * q and is non-negative. (c <= 2a + b)

// Input
// First line consists of two primes 
// Next 3 lines contains the three input numbers modulo those primes

// Output
// Print the value of 2a + b - c in normal notation

// Sample Input 0

// 23 29
// 7 1
// 2 25
// 4 21
// Sample Output 0

// 35
// Explanation 0

// Values of a, b and c are 30, 25 and 50. 2a + b - c is hence 35.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int modulo_prime(int x,int y,int m,int n)
{
    while(x!=y)
    {
        if(x>y)
            y+=n;
        else
            x+=m;
    }
    return x;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n,x,y,x1,x2,y1,y2,a,b,c,temp;
    cin>>m>>n;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    a=modulo_prime(x,y,m,n);
    b=modulo_prime(x1,y1,m,n);
    c=modulo_prime(x2,y2,m,n);
    cout<<2*a+b-c;
    return 0;
}
