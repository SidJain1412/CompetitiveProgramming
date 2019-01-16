// A string is called a pString if it can be represented as p concatenated copies of some string.
// For example, the string "aabaabaabaab" is at the same time a 1String, a 2String and a 4String, but it is not a 3String, a 5String, or a 6String and so on. Obviously any string is a 1String.

// You are given a string s, consisting of lowercase English letters and a positive integer p.
// Your task is to find if it is possible to reorder the letters in the string s in such a way that the resulting string is a pString.

// Input Format

// The first input line contains integer p. 
// The second line contains s, all characters in s are lowercase English letters.

// Constraints

// 1 ≤ p ≤ 1000
// 1 ≤ |s| ≤ 1000

// Output Format

// Print "YES" if it is possible to rearrange the letters in string s in such a way that the result is a pString. 
// Print the result on a single output line. If it is not possible print "NO". (without quotes).

// Sample Input 0

// 2
// aazz
// Sample Output 0

// YES
// Explanation 0

// aazz can be rearranged to azaz which is a 2String


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char s[1000];
    int p;
    int flag = 0;
    cin>>p;
    cin>>s;
    int i;
    int c[26] = {0};
    for(i=0; s[i]!='\0'; i++)
        c[s[i]-'a']+=1;
    for(int i=0;i<26;i++)
    {
        if(c[i]!=0 && c[i]!=p)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
