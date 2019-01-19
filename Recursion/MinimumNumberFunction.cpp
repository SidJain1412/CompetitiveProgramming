// Minimum Number Function

// Input Format

// The input contains a single integer n (the number of integers to be compared).

// Constraints

// 2 <= n <= 50

// Output Format

// Print the string on a single line. Each integer in the string should be written as 'int' and the string must accurately show how min functions can be called to find the smallest of n integers.

// Sample Input 0
// 2

// Sample Output 0
// min(int, int)


// Sample Input 1
// 4

// Sample Output 1
// min(int, min(int, min(int, int)))

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string min(int n)
{
    if(n==1)
        return "int";
    else
        return "min(int, " + min(n-1) + ")"; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin>>n;
    cout<<min(n);
    return 0;
}
