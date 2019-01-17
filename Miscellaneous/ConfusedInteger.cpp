// Confused Integer

// Our beloved integer X is confused. He was told that he is a positive integer which fits in a 32 bit signed integer that can be expressed as A^P where P > 1 and A > 0 where A and P both should be integers. Now he wonders, there is a possibility that he does not exist at all because he does not satisfy the A^P expressibility condition. Given the values of A and P, find out if X exists or not.

// Input Format

// Input contains the value of integer X.

// Constraints

// 0 < X < 2x10^9

// Output Format

// Output "yes" if X can be expressed as A^P and "no" otherwise.

// Sample Input 0

// 4
// Sample Output 0

// yes
// Explanation 0

// Yes as 2^2 = 4

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

  int check(unsigned int n)
  {
      if(n<=1)
          return 1;
      for(int x=2;x<=sqrt(n);x++)
      {
          unsigned p=x;
          while(p<=n)
          {
              p*=x;
              if(p==n)
                  return 1;
          }
      }
      return 0;
  }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int flag=check(n);
    if(flag==1)
    {
        cout<<"yes";
    }
    else
        cout<<"no";
    return 0;
}