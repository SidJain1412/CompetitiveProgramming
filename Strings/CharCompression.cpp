// All Char Compression

// Here is a new proposed method of compressing strings : 
// "Anywhere in the string if a character c occurs k number of times consecutively, it can be written as c"

// Using this algorithm, your task is to compress the string such that its final length is minimum.

// Note that it is not compulsory for you to compress every single character. You may choose to compress whatever characters you want. Only the length of the final string must be minimum.

// INPUT
// The input is one string that needs to be compressed.

// OUTPUT
// Print the final compressed string of minimum length

// CONSTRAINTS
// Length of input string will not be more than 1000.
// Input string will consist of lowercase english alphabets only.

// Sample Input 0

// bbaannaannaa
// Sample Output 0

// banana
// Explanation 0

// string "bbaannaannaa" can be compressed to "banana" by compressing every pair of adjacent equal characters.

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    cin>>str;
    int i;
    int len=str.length();
    // cout<<len;
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[i+1])
            cout<<str[i];
    }
    return 0;
}
