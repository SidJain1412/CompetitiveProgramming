// Discover the right Character

// Given a positive integer, return its corresponding column title as it would appear in an Excel Spreadsheet.
// For Example :

// 1 -> A
// 2 -> B
// ....
// ....
// 26 -> Z
// 27 -> AA
// Input Format

// One integer denoting the column number.

// Constraints

// The integer size will be less than 32-bits.

// Output Format

// Output the corresponding column title.

// Sample Input 0

// 27
// Sample Output 0

// AA

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int rem[100],div,i=0,j;
    while(n>0)
    {
        rem[i]=n%26;
        if(rem[i]==0)
        {
            rem[i]=26;
            n-=26;
        }
        n/=26;
        i++;
    }
    for(j=i-1;j>=0;j--)
        printf("%c",rem[j]+64);
    return 0;
}
