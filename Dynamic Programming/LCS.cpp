// Longest Common Substring | DP-29
// Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.
// Examples :

// Input : X = “GeeksforGeeks”, y = “GeeksQuiz”
// Output : 5
// The longest common substring is “Geeks” and is of length 5.

// Input : X = “abcdxyz”, y = “xyzabcd”
// Output : 4
// The longest common substring is “abcd” and is of length 4.

// Input : X = “zxabcdezy”, y = “yzabcdezx”
// Output : 6
// The longest common substring is “abcdez” and is of length 6.



#include <iostream>
using namespace std;

int LCS(string s1, string s2)
{
    int i,j,max=-1;
    int l1 = s1.length();
    int l2 = s2.length();
    int res[l1+1][l2+1];
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            if(i==0 || j==0)
            {
                res[i][j]=0;
            }
            else if(s1[i-1] == s2[j-1])
            {
                res[i][j] = res[i-1][j-1] + 1;
                if(res[i][j]>max)
                    max = res[i][j];
            }
            else 
                res[i][j] = 0;
        }
    }
    return max;
}

int main()
{
    string s1 = "welcome to ti9";
    string s2 = "cheers to ti9 tourney";
    cout<<LCS(s1,s2);
    return 0;
}
