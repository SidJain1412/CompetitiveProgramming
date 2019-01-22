// Sum of all Digits

// You are given an integer I in the following format : 
// You are given two integers P and Q. 
// Integer I can be obtained by appending Q instances of P together. 
// For example, if P = 619 and Q = 4, then I = 619619619619.

// Your task is, given P and Q find the sum of all the digits of I.
// That sounds too simple, so lets take it up a notch.
// Lets say the sum of all digits is S, then run the following pseudocode : 

// int SumOfDigits(S) :
// 	K <- Sum of Digits of S
//     if K is a single digit number, return K
//     else return SumOfDigits(K)
// INPUT
// Input consist of two numbers P and Q separated by a space.

// OUTPUT
// Print a single digit, the final digit when the numbers of I are continuously added.

// CONSTRAINTS
// 1 ≤ P ≤ 10100000 
// **1 ≤ Q ≤ **105 

// Sample Input 0

// 148 3
// Sample Output 0

// 3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int sumofdigits(long int n)
{
    int d;
    d=n%10;
    if(n<10)
        return d;
    else
        return d+sumofdigits(n/10); 
}

long int sumuptosingledigit(long int n)
{
    int k=sumofdigits(n);
    if(k<10)
        return k;
    else
        return sumofdigits(k);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int m,n;
    cin>>n;
    cin>>m;
    int sum1=sumofdigits(n);
    cout<<sumuptosingledigit(sum1*m);
    return 0;
}
