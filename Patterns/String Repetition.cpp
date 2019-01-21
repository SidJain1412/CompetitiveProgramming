// String Repetition

// Given a string, find the smallest string that can generate the original string by concatenation. See example case for clarity.

// Input Format

// One string. String is guaranteed to contain lowercase letters only.

// Constraints

// 1 <= length of string <= 5000

// Output Format

// Print the smallest string that can be repeated to get the original string.

// Sample Input 0

// abababab
// Sample Output 0

// ab

#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str,s1="",s2="";
    int i,j;
    cin>>str;
    int len=str.length();
    for(i=1;i<=len;i++)
    {
        s2="";
        s1+=str[i-1];
        for(j=0;j<len/i;j++)
        {
            s2+=s1;
        }
        if(s2==str)
            break;
    }
    cout<<s1;
    return 0;
}
