// N as Sum of Primes

// Given a number N, print "YES" if N can be expressed as a sum of 2 prime numbers and "NO" otherwise.

// Input Format

// One number, N.

// Constraints

// 1 <= N <= 10^5.

// Output Format

// "YES" or "NO"

// Sample Input 0

// 5
// Sample Output 0

// YES
// Explanation 0

// 5 = 2 + 3

// Sample Input 1

// 11
// Sample Output 1

// NO

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int check(int n)
{  
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        } 
    }
    if(flag==0||n==1)
        return 1;
    else
        return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int temp=n;
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(check(i)==1&&check(n-i)==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
